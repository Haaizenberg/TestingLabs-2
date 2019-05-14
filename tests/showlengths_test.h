#ifndef SHOWLENGTHS_H
#define SHOWLENGTHS_H
#include "shared.h"

TEST(showlengths_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output2_1.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output2_1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input2_1.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input2_1.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   showlengths(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2_1.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected2_1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output2_1.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output2_1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showlengths_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output2_2.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output2_2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input2_2.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input2_2.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlengths(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2_2.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected2_2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output2_2.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output2_2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showlengths_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output2_3.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output2_3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input2_3.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input2_3.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlengths(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2_3.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected2_3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output2_3.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output2_3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // SHOWLENGTHS_H
