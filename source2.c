#include <stdio.h>

int main() {
	int score;
	while (1) {
		printf("������ �Է��Ͻʽÿ�: ");
		scanf("%d", &score);

		if (score == -1) break;

		if (score < 0 || score>100) {
			printf("�Է� ����!\n");
			continue;
		}

		if (score >= 95 && score <= 100)
			printf("����: A+\n");
		else if (score >= 90 && score < 95)
			printf("����: A0\n");
		else if (score >= 85 && score < 90)
			printf("����: B+\n");
		else if (score >= 80 && score < 85)
			printf("����: B0\n");
		else if (score >= 75 && score < 80)
			printf("����: C+\n");
		else if (score >= 70 && score < 75)
			printf("����: C0\n");
		else
			printf("����: F\n");
	}

	return 0;
}