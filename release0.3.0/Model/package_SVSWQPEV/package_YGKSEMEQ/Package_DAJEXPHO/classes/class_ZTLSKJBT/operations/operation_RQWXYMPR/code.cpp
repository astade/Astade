fprintf(specificationFile,"\t\t//! \\brief The function pointer to the enter function of the next state.\n");
fprintf(specificationFile,"\t\tvoid ( %s::* nextState )( const %s& );\n\n",theStatechart.GetName().c_str(),theStatechart.GetEventType().c_str());