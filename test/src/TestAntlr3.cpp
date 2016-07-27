/* $CORTO_GENERATED
 *
 * TestAntlr3.cpp
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <test.h>

/* $header() */

#include <TestGrammarLexer.h>
#include <TestGrammarParser.h>

/* $end */

corto_void _test_TestAntlr3_test(
    test_TestAntlr3 _this)
{
/* $begin(test/TestAntlr3/test) */
    pANTLR3_INPUT_STREAM input = antlr3StringStreamNew(
        (pANTLR3_UINT8)"HELLO WORLD",
        ANTLR3_ENC_UTF8,
        strlen("HELLO WORLD"),
        (pANTLR3_UINT8)"mock_input_file"
    );
    test_assert(input != NULL);
    input->close(input);
/* $end */
}
