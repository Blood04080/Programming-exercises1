/*
��6�µı����ϰ5
*/
#include <stdio.h>
int main(void) {
    int i, j, num;
    char c;
    printf("Enter the core char you want to print(A...Z):");
    scanf("%c", &c);
    char ch = 'A';
    num = c - 'A' + 1;
    /* �����ַ���ASCII���ȥ'A'��1�õ���ʮ���ƽ��num
     * num������Ҫ��ӡ�Ĵ�A��ʼ���ַ�����Ҳ�Ǵ�ӡ��������
     */
    for (i = 1; i <= num; i++) {
        /* ���ѭ�����ƴ�ӡ������numΪ�����ַ���A�Ĳ��1 */
        for (j = 0; j < num - i; j++)
            printf(" ");
        /* ��ӡ�ո񣬿ո���Ϊ���ַ�����ȥ��ǰ��Ӧ��ӡ���ַ�����
         * ��������Ӧ��ӡ�ո��� + Ӧ��ӡ�ַ��� = ���ַ���(������)
         */
        for (ch = 'A'; j < num; j++)
            printf("%c", ch++);
        /* �ڴ�ӡ�����ַ���ʱ����Ҫͨ��ch��������������ʼֵj�ڿո��Ѿ�ͨ��ѭ��
         * ���˳�ʼ�������ֻ��ӡʣ���ַ���
         */
        for (j = 1, ch -= 2; j < i; j++, ch--)
            printf("%c", ch);
        /* �ڴ�ӡ�����ַ�ʱ���ַ����ݼ����� */
        printf("\n");
    }
    return 0;
}