/*
��4�µı����ϰ8
*/
#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
/* ʹ��define��䶨�嵥λ֮��Ļ������ */
int main(void) {
    float range, oil;
    printf("Please input the range you traveled(in mile):");
    scanf("%f", &range);
    /* ��Ӣ��Ϊ��λ��ȡ������� */
    printf("Please input the oil you spend(in gallon):");
    scanf("%f", &oil);
    /* �Լ���Ϊ��λ��ȡ���ĵ����� */
    printf("\nUSA, your oil wear is %.1f M/G\n", range / oil);
    /* ��ӡUSA�ĺ����� */
    printf("In Europe, your oil wear is %.1fL/100KM", (oil * GALLON_TO_LITRE * 100) / (range * MILE_TO_KM));
    /* ��ӡŷ�޵ĺ����� */
    return 0;
}