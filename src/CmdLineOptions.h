//
// Created by mwo on 6/11/15.
//

#ifndef LOZZEG01_CMDLINEOPTIONS_H
#define LOZZEG01_CMDLINEOPTIONS_H

#include <iostream>
#include <string>

#include <boost/program_options.hpp>
#include <boost/optional.hpp>

namespace lozzeg
{

    using namespace std;
    using namespace boost::program_options;

    /**
     * Manages program options of this example program.
     *
     * Basically a wrapper for boost::program_options
     */
    class CmdLineOptions {
        variables_map vm;

    public:
        CmdLineOptions(int acc, const char *avv[]);

    template<typename T>
    boost::optional<T> get_option(const string & opt_name) const;
    };
}


#endif //LOZZEG01_CMDLINEOPTIONS_H
