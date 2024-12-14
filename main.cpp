#include <stdlib.h>
#include "general.h"
#include "processor_func.h"

#include "proc_err.h"

int main() {
    proc_err proc_last_err = PROC_ERR_OK;
    proc_data_t proc_data = {};

    if (bin_code_read("./../bin_code.txt", proc_data.code, &proc_last_err) == -1) { // FIXME: есть баги
        debug("bin_code_read failed");
        return EXIT_FAILURE;
    }

    execute_code(&proc_data, &proc_last_err);

    return EXIT_SUCCESS;
}
