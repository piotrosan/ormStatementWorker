//
// Created by piotr on 23.05.25.
//

#ifndef STATEMENT_H
#define STATEMENT_H

#include <iostream>
#include <map>

using namespace  std;
namespace statement {

    class Statement {
        string rawStatement;
        string resultStatement;

        public:
            Statement() = default;

        protected:
            void interpolationStatement(const map<string, string>& statementParameters) {


            }



    };


}

#endif //STATEMENT_H
