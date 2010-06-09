#!/bin/bash -e

BUILD=${1:-1}

DEBDIR=Source/Packages/deb
ICONDIR=Source/Icons
DESKTOPDIR=Source/freedesktop

VERSION=`awk -F '"' '{print $2}' Model/components_WGNBOFKH/component_KSEQOEET/manual/AstadeVersion.h`

ARCH=`uname -m`
if [ "${ARCH}" = "i686" ]; then
	ARCH=i386
elif [ "${ARCH}" = "i586" ]; then
	ARCH=i386
elif [ "${ARCH}" = "x86_64" ]; then
	ARCH=amd64
fi

rm -rf ${DEBDIR}/tmp
mkdir -p ${DEBDIR}/tmp/{DEBIAN,usr/{bin,share/{Astade,doc/astade}}}
sed -e s/VERSION-BUILD/${VERSION}-${BUILD}/ -e s/ARCH/${ARCH}/ \
	<${DEBDIR}/astadetools_control >${DEBDIR}/tmp/DEBIAN/control

cp -p ${DEBDIR}/copyright ${DEBDIR}/tmp/usr/share/doc/astade/

pushd Source >/dev/null
find Templates -name .svn -prune -o -type f -exec rsync -av --relative {} Packages/deb/tmp/usr/share/Astade/ \;
popd >/dev/null

cp Model/components_WGNBOFKH/Component_XZAWFDAN/Config_ZUJGZNUN/AstadeGenerate ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_CGenerator/Linux_Debug/CGenerator ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_CppGenerator/Config_PPWOWKVA/CppGenerator ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_RAVGAUPS/Config_AXJYPYCU/StateChartCoder ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_FOGYFECV/Config_HEYGDBJI/StateChartCoderC ${DEBDIR}/tmp/usr/bin/
cp Model/Components_ZLRQZKQB/Component_DJLKKOUQ/Config_XXQJRNKA/StateChartCoderVSM ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_CBEUPFRX/Config_EAEBAKKD/StateChartCoderACF ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_StateChartCoderACF++/Config_Linux_Debug/StateChartCoderACF++ ${DEBDIR}/tmp/usr/bin/
cp Model/components_WGNBOFKH/Component_StateChartCoderWx/Config_Linux_Debug/StateChartCoderWx ${DEBDIR}/tmp/usr/bin/
strip -s ${DEBDIR}/tmp/usr/bin/*

cp -p ${DEBDIR}/preinst ${DEBDIR}/tmp/DEBIAN/
cp -p ${DEBDIR}/postinst ${DEBDIR}/tmp/DEBIAN/
cp -p ${DEBDIR}/prerm ${DEBDIR}/tmp/DEBIAN/
cp -p ${DEBDIR}/postrm ${DEBDIR}/tmp/DEBIAN/

pushd ${DEBDIR} >/dev/null
fakeroot dpkg-deb --build tmp astadetools-${VERSION}-${BUILD}.deb
popd >/dev/null

rm -rf ${DEBDIR}/tmp
