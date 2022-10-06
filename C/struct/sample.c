
#include <stdio.h>
#include <string.h>


struct Phone
{
    char name[30];
    char brand[30];
    int price;
};

/* print struct info */
void printInfo(struct Phone phone)
{
    printf("Phone name : %s\n", phone.name);
    printf("Phone brand : %s\n", phone.brand);
    printf("Phone price : %d\n", phone.price);
}

void printPointerInfo(struct Phone *phone)
{
    printf("Phone name : %s\n", phone->name);
    printf("Phone brand : %s\n", phone->brand);
    printf("Phone price : %d\n", phone->price);
}

/* 
Phone name : Huawei
Phone brand : p40
Phone price : 4299
 */
int main(int argc, char const *argv[])
{
    struct Phone phone;

    strcpy(phone.name, "Huawei");
    strcpy(phone.brand, "p40");
    phone.price = 4299;

    printInfo(phone);

    printPointerInfo(&phone);

    return 0;
}
