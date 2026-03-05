// how to define union

union info{
    char firstName[20];
    int age;
};


union minmax{
    int min;
    int max;

};


int main()
{
    // Template - for creating a Union Variable
    // union <union_name> <variable_name>;
    // union <union_name> <variable_name>;

    union info myVariable1;

    myVariable1.age = 30;

    printf("my.age = %d\n", myVariable1.age);

    strcpy(myVariable1.firstName, "Helloo!");

    printf("myVariable1.firstName = %s\n", myVariable1.firstName);

    printf("myVariable1.age = %d\n", myVariable1.age);

    return 0;
}