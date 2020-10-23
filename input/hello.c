#include <stdbool.h>

bool fun(int b);

int main() {

	int temp = 1 + 1;
	temp ++;

	int b = 6;
	fun(b);
}

bool fun(int b){
	if(b > 5){
		return true;
	}
}
