int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d\n", x); // Output: 20    free(ptr); // ERROR: This will cause a segmentation fault or other undefined behavior. }