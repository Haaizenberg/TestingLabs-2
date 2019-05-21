#ifndef RP_TEST_H
#define RP_TEST_H
#include "shared.h"

TEST(rp_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1_1.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output1_1.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input1_1.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input1_1.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt,2,3);
   rp(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1_1.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected1_1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1_1.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output1_1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rp_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1_2.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output1_2.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input1_2.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input1_2.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    mwcrsr(txt,4,5);
    rp(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1_2.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected1_2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1_2.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output1_2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rp_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1_3.txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output1_3.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input1_3.txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input1_3.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    mwcrsr(txt,1,1);
    rp(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1_3.txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected1_3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1_3.txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output1_3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(rp_test, testEmptyFile) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1(empty).txt", "wb") : outputFile = fopen("../../TestingLabs2/tests/output/output(empty).txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input1(empty).txt", MAXLINE) : strncpy(inFile, "../../TestingLabs2/tests/input/input1(empty).txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt,2,3);
   rp(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1(empty).txt", "r") : expectedData = fopen("../../TestingLabs2/tests/expected/expected1(empty).txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1(empty).txt", "r") : outputData = fopen("../../TestingLabs2/tests/output/output1(empty).txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // RP_TEST_H
