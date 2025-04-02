#include <stdio.h>
#include <capstone/capstone.h>

int main() {
    csh handle;
    cs_insn *insn;
    size_t count;
    
    // Define some x86 machine code to disassemble
    uint8_t code[] = { 0x55, 0x48, 0x8B, 0x05, 0xB8, 0x13, 0x00, 0x00 };

    // Initialize Capstone for x86-64
    if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK)
        return -1;

    // Disassemble the machine code
    count = cs_disasm(handle, code, sizeof(code), 0x1000, 0, &insn);
    if (count > 0) {
        for (size_t i = 0; i < count; i++) {
            printf("0x%" PRIx64 ": %s %s\n", insn[i].address, insn[i].mnemonic, insn[i].op_str);
        }
        cs_free(insn, count);
    } else {
        printf("Failed to disassemble!\n");
    }

    // Close Capstone
    cs_close(&handle);
    return 0;
}
