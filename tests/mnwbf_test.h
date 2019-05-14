#ifndef MNWBF_TEST_H
#define MNWBF_TEST_H
#include "shared.h"

TEST(mnwbf_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output3_1.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output3_1.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input3_1.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input3_1.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt,1,3);
   mnwbf(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3_1.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected3_1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output3_1.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output3_1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mnwbf_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output3_2.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output3_2.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input3_2.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input3_2.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    mwcrsr(txt,2,5);
    mnwbf(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3_2.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected3_2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output3_2.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output3_2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mnwbf_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output3_3.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output3_3.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input3_3.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input3_3.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    mwcrsr(txt,2,10);
    mnwbf(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3_3.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected3_3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output3_3.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output3_3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // MNWBF_TEST_H
