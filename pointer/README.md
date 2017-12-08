# Pointer

## Introduction
 變數（Variable）提供具名稱的記憶體儲存空間，一個變數關聯一個資料型態、儲存的值與儲存空間的位址值
 
 變數的資料型態決定了變數分配到的記憶體大小；變數本身的值是指儲存於記憶體中的某個數值，可以透過變數名稱取得這個數值，這個數值又稱為 rvalue 或 read value；而變數的位址值則是指變數所分配到的記憶體之位置，變數本身又稱為 lvalue或 location value。
 
 * How to get address value of variable '&' (Address-of operator) ?
 ```
#include <stdio.h>

int main(void) {

    int var = 10;
    printf("memory address of var：%p\n", &var); // So each time you see the this line will get different value
    printf("value of var：%d\n", var); // The value you store in previos address
    return 0;
}
```

* Declare of pointer
```
int *ptr1; // Better for preventing from following error
int* ptr2;
void* ptr; // When encounter the case we care memory address only.
```

```
int* ptr1, ptr2; //ptr2 is not a pointer
```

* Initialization of pointer
- 若並未初始指標就指定值給 *ptr，所以會造成不可預知的結果（通常是記憶體區段錯誤），最好為指標 設定初值，如果指標一開始不指向任何的位址，則可設定初值為 0，表示不指向任何位址

```
// Not good style
int *ptr; 
*ptr = 10;

// Correct style
int *iptr = 0;
```
* Type Casting of pointer
```
void *vptr = &var ;
int *iptr = (int*) vptr;
```

* Change the value of const
```
const int var1 = 10;
int *vptr1 = &var1; // 在 Ubuntu 16.04 的 gcc 會產生警訊
*vptr1 = 20;
printf("%d\n", var1);

// If u dont wanna change the memory address also

//Solution 1
const int var2 = 10;
const int *vptr = &var2;
*vptr = 20; // error, assignment of read-only location 

//Solution 2
int x = 10;
int y = 20;
int* const vptr = &x;
vptr = &y;  // error,  assignment of read-only variable `vptr'
```
