#include <stdio.h>
#include <inttypes.h>
#include <capstone/capstone.h>

#define Code "\x90"

int main()
{
	csh apihandler;
	cs_insn *data;
	size_t disas;
	if (cs_open(CS_ARCH_X86, CS_MODE_32, &apihandler) != CS_ERR_OK)
		return -1;
	disas = cs_disasm(apihandler, Code, sizeof(Code)-1, 0x1000, 0, &data);
	if (disas > 0)	
{
	size_t num;
	for (num = 0; num < disas; num++) 
{
	printf("0x%"PRIx32":\t%s\t\t%s\n", data[num].address, data[num].mnemonic, data[num].op_str);
}
 
       cs_free(data, disas);

    }
else
printf("Disas Failed!\n");
cs_close(&apihandler);
return 0;
}

     
 

