#include <stdio.h>

int main() {
	int score;
	while (1) {
		printf("점수를 입력하십시오: ");
		scanf("%d", &score);

		if (score == -1) break;

		if (score < 0 || score>100) {
			printf("입력 오류!\n");
			continue;
		}

		if (score >= 95 && score <= 100)
			printf("학점: A+\n");
		else if (score >= 90 && score < 95)
			printf("학점: A0\n");
		else if (score >= 85 && score < 90)
			printf("학점: B+\n");
		else if (score >= 80 && score < 85)
			printf("학점: B0\n");
		else if (score >= 75 && score < 80)
			printf("학점: C+\n");
		else if (score >= 70 && score < 75)
			printf("학점: C0\n");
		else
			printf("학점: F\n");
	}

	return 0;
}