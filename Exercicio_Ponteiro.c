int main(int argc, char *argv[]){
    int a, b, *p1, *p2;

    a =4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 +3; b = b * (*p1); (*p2)++;//Apenas aglutinou 3 comnado em uma mesma linha
    p1 = &b;
    //++ quer dizer para acrescertar 1

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);


    return 0;
}
