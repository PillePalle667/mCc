#include <stdio.h>
#include <stdlib.h>

#include "mCc/ast.h"
#include "mCc/parser.h"

int main(void)
{
	FILE *in = stdin;

	struct mC_ast_expression *expr = mC_parser_run(in);
	if (!expr) {
		return EXIT_FAILURE;
	}

	/* TODO */

	mC_ast_expression_delete(expr);

	return EXIT_SUCCESS;
}
