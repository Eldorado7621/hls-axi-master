//size limit
//maximume AXI4 full burst lenght is 256 bytes
#define MAX_TRANSFER_SIZE 268435456
const int max_depth=MAX_TRANSFER_SIZE;


int setMem(unsigned char value, unsigned char addr, int size);
