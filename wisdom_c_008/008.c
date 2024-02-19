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
//  // 先不检查，先跑一圈再说
//	do {
//		current_lap++;
//		printf("跑步者跑完第%" PRIu32 "圈\n", current_lap);
//	} while (current_lap < total_laps);
//
//	printf("跑步者跑完所有的%" PRIu32 "圈\n", total_laps);
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
//		puts("****主菜单****");
//		puts("1.新游戏");
//		puts("2.载入游戏");
//		puts("3.退出");
//		puts("4.请选择一个选项：");
//		scanf_s("%" PRIu32, &choice);
//
//		//  处理用户的选择
//		switch (choice) {
//		case 1:
//			puts("新游戏已经启动……");
//			break;
//		case 2:
//			puts("载入存档中……");
//			puts("存档已经载入……");
//			puts("游戏已经玩完，返回主菜单重新选择……");
//			break;
//		case 3:
//			puts("感谢游玩，再见！");
//		default:
//			puts("无效选择，请重新选择！");
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
//	// 生成随机数
//	srand(time(NULL));
//	// 生成1-100的随机数
//	secret_num = rand() % 100 + 1;
//
//	puts("猜猜我想的是哪一个数（1-100）?");
//
//	do {
//		puts("输入你的猜测：");
//		scanf_s("%d", &guess);
//
//		if (guess < secret_num) {
//			puts("太小了，再试试看！");
//		}
//		else if (guess > secret_num) {
//			puts("太大了，再试试看！");
//		}
//	
//	} while (guess != secret_num);
//
//	printf("恭喜你，答对啦！答案就是 %" PRIu32 "\n", secret_num);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	puts("请输入一系列正整数来计算它们的和。");
//	puts("可以输入负数，但它们不会被加入到总和之中。");
//	puts("输入0以结束输入并且先输出总和。");
//
//	uint32_t sum = 0;
//
//	int32_t number;
//
//	while (1) {
//		puts("请输入一个数字");
//
//		scanf_s("%d", &number);
//
//		if (number = 0) {
//			break;
//		}
//
//		if (number < 0) {
//			continue;// 跳过本次循环的剩余部分
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
//		puts("请输入一系列数字：");
//		
//		scanf_s("%d", &number);
//		// 检查结束条件
//		if (number == -1) {
//			break;
//		}
//		// 跳过所有的负数和大于100的数
//		if (number < 0 || number > 100) {
//			continue;
//		}
//		// 处理有效数字
//		if (number % 2 == 0) {
//			printf("%" PRIu32 "是偶数\n", number);
//		}
//		else {
//			printf("%" PRIu32 "是奇数\n", number);
//		}
//		
//	}
//	puts("程序结束！");
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
//		puts("请输入一个数字：");
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
//			printf("%" PRIu32 "是偶数\n", number);
//		}
//
//		else {
//			printf("%" PRIu32 "是奇数\n", number);
//		}
//	}
//
//	puts("程序结束！");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	puts("跑步者开始跑步");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("跑步者跑完第 %" PRIu32 "圈\n", current_lap);
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
//	puts("跑步者开始跑步");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("跑步者跑完第 %" PRIu32 "圈\n", current_lap);
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
//	puts("跑步者开始跑步");
//
//	const uint32_t total_laps = 10;
//
//	for (uint32_t current_lap = 0; current_lap <= total_laps; current_lap++) {
//		printf("跑步者跑完第 %" PRIu32 "圈\n", current_lap);
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
//	puts("请输入一个整数N，我们将计算从1到N所有整数的平方和！");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++) {
//		sum_of_squares += index * index;
//	}
//
//	printf("从1到%" PRIu32 "的所有整数平方和是：%" PRIu32 "\n", number, sum_of_squares);
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
//	puts("请输入一个整数N，我们将计算从1到N所有整数的平方和。");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++) {
//		sum_of_squares += index * index;
//	}
//
//	printf("从1到%" PRIu32 "所有整数的和是：%" PRIu32 "\n", number, sum_of_squares);
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
//	puts("请输入一个数字N，我们将计算从1到N所有整数的和！");
//
//	scanf_s("%u", &number);
//
//	for (uint32_t index = 0; index <= number; index++)
//	{
//		sum_of_squares += index * index;
//	}
//
//	printf("从1到%" PRIu32 "所有整数的和是%" PRIu32 "\n", number, sum_of_squares);
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
//	puts("请输入一个正整数，我们将从该数倒数到1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("倒数开始！");
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
//	puts("请输入一个正整数，我们将从该数倒数到1：");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("倒数开始！");
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
//	puts("请输入一个正整数，我们将从该数倒数到1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("倒数开始");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
// 
//	puts("倒数结束！");
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
//	puts("请输入一个整数N，我们将从该数数到1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("倒数开始！");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//	}
//
//	puts("倒数结束！");
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
//	puts("请输入一个整数N，我们将从该数数到1");
//
//	scanf_s("%" SCNu32, &start_number);
//
//	puts("倒数开始！");
//
//	for (uint32_t index = start_number; index > 0; index--) {
//		printf("%" PRIu32 "\n", index);
//		Sleep(1000);
//		/*sleep(1);*/
//	}
//
//	puts("倒数结束！");
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
//		用户输入一个正整数，计算阶乘，默认还是从1开始
//	*/
//
//	uint32_t number; // INPUT
//
//	uint32_t factorial = 1; // 阶乘初始化
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

// 开方
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

// 选修 
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
//	puts("请输入一个整数，我们将判断他不是整数");
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
//	puts("请输入一个正整数，我们将为你生成乘法表。");
//
//	scanf_s("%" SCNu32, &num);
//
//	printf("乘法表：%" PRIu32 "\n", num);
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
//	puts("请输入一个正整数，我们将生成乘法表");
//
//	scanf_s("%" SCNu32, &num);
//
//	printf("乘法表：%" PRIu32 "\n", num);
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
//	puts("请输入图案的大小：");
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
//	puts("请输入图案的大小：");
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


//for_6（三角形）
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t size;
//	puts("请输入图案的大小：");
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


// for_7（金字塔）
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t levels;
//
//	puts("请输入金字塔的层数：");
//	scanf_s("%" SCNu32, &levels);
//
//	puts("数字金字塔图案如下：");
//
//	for (uint32_t i = 1; i <= levels; i++) {
//		//计算并提前储存每层空格
//		uint32_t spaces = levels - i;
//		// 处理空格
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

