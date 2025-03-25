#include <stdio.h>

void decimalToBinary(int num) {
    // 0인 경우는 특별히 처리
    if (num == 0) {
        printf("0");
        return;
    }
    
    // 2진수 숫자를 저장할 배열 (32비트 정수 기준)
    int binary[32];
    int i = 0;
    
    // 2진수로 변환
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // 배열을 역순으로 출력
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    
    printf("10진수를 입력하세요: ");
    scanf("%d", &num);
    
    printf("%d의 2진수 변환 결과: ", num);
    decimalToBinary(num);
    printf("\n");
    
    return 0;
}