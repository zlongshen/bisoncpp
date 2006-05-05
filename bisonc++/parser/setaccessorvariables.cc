#include "parser.ih"

// the default is overruled by the grammar specification, which in turn is
// overruled by the command-line. So,
//  If the command-line is not set and if the data-member is empty, use the
// default

void Parser::setAccessorVariables() 
{
    if (d_className.empty())
        d_className = s_defaultClassName;

    if (!d_arg.option(&d_baseclassSkeleton, 'B'))
        d_baseclassSkeleton = s_defaultBaseclassSkeleton;

    if (!d_arg.option(&d_classSkeleton, 'C'))
        d_classSkeleton = s_defaultClassSkeleton;

    if (!d_arg.option(&d_implementationSkeleton, 'I'))
        d_implementationSkeleton = s_defaultImplementationSkeleton;

    if (!d_arg.option(&d_parsefunSkeleton, 'P'))
        d_parsefunSkeleton = s_defaultParsefunSkeleton;

    if (d_parsefunSource.empty())
        d_parsefunSource = s_defaultParsefunSource;

    setName(&d_baseclassHeader, "base.h");
    setName(&d_classHeader, ".h");
    setName(&d_implementationHeader, ".ih");
}
