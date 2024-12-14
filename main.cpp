#include <cstdlib>
#include <stdio.h>

#include "bind_coms.h"
#include "processor_func.h"


#include "proc_err.h"
#include "proc_output.h"

int main() {
    proc_err proc_last_err = PROC_ERR_OK;
    proc_data_t proc_data = {};

    bin_code_read("./../bin_code.txt", proc_data.code, &proc_last_err); // FIXME: есть баги

    execute_code(&proc_data, &proc_last_err);

    return EXIT_SUCCESS;
}