//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t total_laps = 10;
//
//	uint32_t current_lap = 0;
//  // �Ȳ���飬����һȦ��˵
//	do {
//		current_lap++;
//		printf("�ܲ��������%" PRIu32 "Ȧ\n", current_lap);
//	} while (current_lap < total_laps);
//
//	printf("�ܲ����������е�%" PRIu32 "Ȧ\n", total_laps);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t choice;
//
//	do {
//		puts("****���˵�****");
//		puts("1.����Ϸ");
//		puts("2.������Ϸ");
//		puts("3.�˳�");
//		puts("4.��ѡ��һ��ѡ�");
//		scanf_s("%" PRIu32, &choice);
//
//		//  �����û���ѡ��
//		switch (choice) {
//		case 1:
//			puts("����Ϸ�Ѿ���������");
//			break;
//		case 2:
//			puts("����浵�С���");
//			puts("�浵�Ѿ����롭��");
//			puts("��Ϸ�Ѿ����꣬�������˵�����ѡ�񡭡�");
//			break;
//		case 3:
//			puts("��л���棬�ټ���");
//		default:
//			puts("��Чѡ��������ѡ��");
//		}
//
//		}while (choice != 3);
//
//		return 0;
//	}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	uint32_t secret_num, guess;
//	// ���������
//	srand(time(NULL));
//	// ����1-100�������
//	secret_num = rand() % 100 + 1;
//
//	puts("�²����������һ������1-100��?");
//
//	do {
//		puts("������Ĳ²⣺");
//		scanf_s("%d", &guess);
//
//		if (guess < secret_num) {
//			puts("̫С�ˣ������Կ���");
//		}
//		else if (guess > secret_num) {
//			puts("̫���ˣ������Կ���");
//		}
//	
//	} while (guess != secret_num);
//
//	printf("��ϲ�㣬��������𰸾��� %" PRIu32 "\n", secret_num);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	puts("������һϵ�����������������ǵĺ͡�");
//	puts("�������븺���������ǲ��ᱻ���뵽�ܺ�֮�С�");
//	puts("����0�Խ������벢��������ܺ͡�");
//
//	uint32_t sum = 0;
//
//	int32_t number;
//
//	while (1) {
//		puts("������һ������");
//
//		scanf_s("%d", &number);
//
//		if (number = 0) {
//			break;
//		}
//
//		if (number < 0) {
//			continue;// ��������ѭ����ʣ�ಿ��
//		}
//
//		sum += number;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int32_t number;
//
//	while (1) {
//		puts("������һϵ�����֣�");
//		
//		scanf_s("%d", &number);
//		// ����������
//		if (number == -1) {
//			break;
//		}
//		// �������еĸ����ʹ���100����
//		if (number < 0 || number > 100) {
//			continue;
//		}
//		// ������Ч����
//		if (number % 2 == 0) {
//			printf("%" PRIu32 "��ż��\n", number);
//		}
//		else {
//			printf("%" PRIu32 "������\n", number);
//		}
//		
//	}
//	puts("���������");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int32_t number;
//
//	while (1) {
//		puts("������һ�����֣�");
//
//		scanf_s("%d", &number);
//
//		if (number == -1) {
//			break;
//		}
//
//		if (number < 0 || number > 100) {
//			continue;
//		}
//
//		if (number % 2 == 0) {
//			printf("%" PRIu32 "��ż��\n", number);
//		}
//
//		else {
//			printf("%" PRIu32 "������\n", number);
//		}
//	}
//
//	puts("���������");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	puts("�ܲ��߿�ʼ�ܲ�");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("�ܲ�������� %" PRIu32 "Ȧ\n", current_lap);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	puts("�ܲ��߿�ʼ�ܲ�");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("�ܲ�������� %" PRIu32 "Ȧ\n", current_lap);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	puts("�ܲ��߿�ʼ�ܲ�");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("�ܲ�������� %" PRIu32 "Ȧ\n", current_lap);
//	}
//
//	return 0;
//}

// for_1
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t number;
//	
//	uint32_t sum_of_squares = 0;
//
//	puts("������һ������N�����ǽ������1��N����������ƽ���ͣ�");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++) {
//		sum_of_squares += index * index;
//	}
//
//	printf("��1��%" PRIu32 "����������ƽ�����ǣ�%" PRIu32 "\n", number, sum_of_squares);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t number;
//
//	uint32_t sum_of_squares = 0;
//
//	puts("������һ������N�����ǽ������1��N����������ƽ���͡�");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++) {
//		sum_of_squares += index * index;
//	}
//
//	printf("��1��%" PRIu32 "���������ĺ��ǣ�%" PRIu32 "\n", number, sum_of_squares);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t number;
//
//	uint32_t sum_of_squares = 0;
//
//	puts("������һ������N�����ǽ������1��N���������ĺͣ�");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++)
//	{
//		sum_of_squares += index * index;
//	}
//
//	printf("��1��%" PRIu32 "���������ĺ���%" PRIu32 "\n", number, sum_of_squares);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>

//int main(void)
//{
//	uint32_t start_number;
//
//	puts("������һ�������������ǽ��Ӹ���������1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("������ʼ��");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
//
//
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t start_number;
//
//	puts("������һ�������������ǽ��Ӹ���������1��");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("������ʼ��");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t start_number;
//
//	puts("������һ�������������ǽ��Ӹ���������1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("������ʼ");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
// 
//	puts("����������");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t start_number;
//
//	puts("������һ������N�����ǽ��Ӹ�������1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("������ʼ��");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
//
//	puts("����������");
//
//	return 0;
//}

//for_2
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t start_number;
//
//	puts("������һ������N�����ǽ��Ӹ�������1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("������ʼ��");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//		Sleep(1000);
//		/*sleep(1);*/
//	}
//
//	puts("����������");
//
//	return 0;
//}


// for_3

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	/*
//		�û�����һ��������������׳ˣ�Ĭ�ϻ��Ǵ�1��ʼ
//	*/
//
//	uint32_t number; // INPUT
//
//	uint32_t factorial = 1; // �׳˳�ʼ��
//
//	scanf_s("%" SCNu32, &number);
//
//	for (uint32_t index = 1; index <= number; index++) {
//		factorial *= index;
//	}
//
//	printf("%" PRIu32 "! = %" PRIu32 "\n", number, factorial);
//
//	return 0;
//}

// ����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <math.h>
//
//int main(void)
//{
//	/*double number = 4.00;*/
//
//	printf("%lf\n", sqrt(4));
//
//	return 0;
//}

// ѡ�� 
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <math.h>
//
//int main(void)
//{
//	uint32_t num;
//
//	bool is_prime = true;
//
//	scanf_s("%" SCNu32, &num);
//
//	puts("������һ�����������ǽ��ж�����������");
//
//	for (uint32_t i = 2; i * i < num; i++) {
//		if (num % i == 0) {
//			is_prime = false;
//			break;
//		}
//	}
//
//	return 0;
//}


// for_4

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <math.h>
//
//int main(void)
//{
//	uint32_t num;
//
//	puts("������һ�������������ǽ�Ϊ�����ɳ˷���");
//
//	scanf_s("%" SCNu32, &num);
//
//	printf("�˷���%" PRIu32 "\n", num);
//
//	for (uint32_t index = 1; index <= 10; index++) {
//		printf("%" PRIu32 " * %" PRIu32 " = %" PRIu32 "\n", num, index, num * index);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <math.h>
//
//int main(void)
//{
//	uint32_t num;
//
//	puts("������һ�������������ǽ����ɳ˷���");
//
//	scanf_s("%" SCNu32, &num);
//
//	printf("�˷���%" PRIu32 "\n", num);
//
//	for (uint32_t index = 1; index <= 10; index++) {
//		printf("%" PRIu32 " * %" PRIu32 " = %" PRIu32 "\n", num, index, num * index);
//	}
//
//	return 0;
//}


//for_5
//#include <stdio.h>
//#include <inttypes.h>
//#include <stdint.h>
//
//int main(void)
//{
//	uint32_t size;
//	puts("������ͼ���Ĵ�С��");
//	scanf_s("%" SCNu32, &size);
//
//	for (uint32_t i = 0; i < size; i++) {
//		for (uint32_t j = 0; j < size; j++) {
//			printf("* ");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t size;
//	puts("������ͼ���Ĵ�С��");
//	scanf_s("%" SCNu32, &size);
//
//	for (uint32_t i = 0; i < size; i++) {
//		for (uint32_t j = 0; j < size; j++) {
//			printf("* ");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}


//for_6�������Σ�
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t size;
//	puts("������ͼ���Ĵ�С��");
//	scanf_s("%" SCNu32, &size);
//
//	for (uint32_t i = 0; i < size; i++) {
//		for (uint32_t j = 0; j <= i; j++) {
//			printf("* ");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}


// for_7����������
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t levels;
//
//	puts("������������Ĳ�����");
//	scanf_s("%" SCNu32, &levels);
//
//	puts("���ֽ�����ͼ�����£�");
//
//	for (uint32_t i = 1; i <= levels; i++) {
//		//���㲢��ǰ����ÿ��ո�
//		uint32_t spaces = levels - i;
//		// ����ո�
//		for (uint32_t j = 0; j < spaces; j++) {
//			printf("  ");
//		}
//
//		for (uint32_t j = 1; j <= i; j++) {
//			printf("%" PRIu32 " ", j);
//		}
//
//		for (uint32_t j = i - 1; j >= 1; j--) {
//			printf("%" PRIu32 " ", j);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

