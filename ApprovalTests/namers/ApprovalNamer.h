#ifndef APPROVALNAMER_H
#define APPROVALNAMER_H

#include <stack>
#include <sstream>
#include "../Macros.h"

using std::string;

class TestName {
public:
    string fileName;
    string testCase;
    std::vector<string> sections;
};

class ApprovalNamer {
private:
public:
    ApprovalNamer() {
    }

    string getTestName() {
        std::stringstream ext;
        auto test = currentTest();
        for (int i = 0; i < test.sections.size(); i++) {
            if (0 < i) {
                ext << ".";
            }
            ext << test.sections[i];

        }

        return ext.str();
    }

    string getFileName() {
        auto file = currentTest().fileName;
        auto start = file.rfind("/") + 1;
        auto end = file.rfind(".");
        return file.substr(start, end - start);
    }

    string getDirectory() {
        auto file = currentTest().fileName;
        auto end = file.rfind("/") + 1;
        return file.substr(0, end);
    }

    STATIC(TestName, currentTest, NULL)

    string getApprovedFile(string extentionWithDot) {

        return getFullFileName(".approved", extentionWithDot);
    }

    string getReceivedFile(string extentionWithDot) {

        return getFullFileName(".received", extentionWithDot);
    }

    string getFullFileName(string approved, string extentionWithDot) {
        std::stringstream ext;
        ext << getDirectory() << getFileName() << "." << getTestName() << approved << extentionWithDot;
        return ext.str();
    }
};

#endif
