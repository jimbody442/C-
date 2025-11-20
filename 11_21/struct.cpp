#include "struct.h"
//#include "new_struct.h"
//ifndef를 사용하여 중복 포함 방지
int main()
{
	MyStruct Panda = { "Panda", 5 };

	display(Panda);

	return 0;
}

