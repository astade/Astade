//~~ void printDeclaration() [ACClass] ~~
printf("\n%s [",m_keyword);
printName(m_Element,true);
printf("] {\n");
printDescription(1,m_Element);
printForwardDeclarations(0);
printf("}\n");
printDeclarations();