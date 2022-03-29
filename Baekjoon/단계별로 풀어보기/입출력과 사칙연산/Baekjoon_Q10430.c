int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
  
  //각각의 조건과 같으면 1을출력 다르면 0
    printf("%d\n", (a + b) % c); 
    printf("%d\n", (a % c + b % c) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", (a % c * b % c) % c);
    return 0;
}
