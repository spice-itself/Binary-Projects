#include <cstring>
#include <iostream>
#include <vector>

void t1() {
  int n;
  std::cout << "Введите количество элементов массива:\n %  ";
  std::cin >> n;
  std::vector<int> pooosi(n);
  int posi = 0, nega = 0, even = 0, odd = 0, zero = 0;
  std::cout << "Введите " << n << " элементов массива:\n";
  for (int i = 0; i < n; i++) {
    std::cin >> pooosi[i];

    if (pooosi[i] > 0)
      posi++;
    if (pooosi[i] < 0)
      nega++;
    if (pooosi[i] == 0)
      zero++;
    if (pooosi[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  std::cout << "Введенный массив: ";
  for (int num : pooosi) {
    std::cout << num << " ";
  }
  std::cout << "\n";
  std::cout << "Положительных чисел: " << posi << "\n";
  std::cout << "Отрицательных чисел: " << nega << "\n";
  std::cout << "Четных чисел: " << even << "\n";
  std::cout << "Нечетных чисел: " << odd << "\n";
  std::cout << "Нулей: " << zero << "\n";
}

void t2() {
  // ??? Раз уж просит вывести отрицательные значения элементов в массиве, то
  // это числа.

  int i = 0;
  std::cout << "Введите размер массива.\n";
  std::cin >> i;
  std::vector<int> input(i);
  std::cout << "Введите ряд чисел разделив их пробелами.\n";
  while (i > 0) {
    std::cin >> input[i];
    i--;
  }
  std::cout << "Массив:\n";
  int ptr = input.size();
  while (ptr > 0) {
    std::cout << input[ptr] << ' ';
    input[ptr] = input[ptr] * (-1);
    ptr--;
  }
  ptr = input.size();
  std::cout << "Отрицательные значения массива:\n";
  while (ptr > 0) {
    std::cout << input[ptr] << ' ';
    ptr--;
  }
  std::cout << "\n";
}

void t3() {
  int size;
  int regist;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::cout << "Массив:\n";
  for (int j = 0; j < size; j++) {
    std::cout << dynaarr[j] << ' ';
  }
  regist = dynaarr[0];
  dynaarr[0] = dynaarr[size - 1];
  dynaarr[size - 1] = regist;
  std::cout << "\nПоменялись местами: " << dynaarr[size - 1] << " и "
            << dynaarr[0] << '\n';
}

void t4() {
  int size;
  int regist;
  std::vector<int> the_nums(2);
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::cout << "Массив:\n";
  for (int j = 0; j < size; j++) {
    std::cout << dynaarr[j] << ' ';
  }
  std::cout << "Введите какие элементы вы хотите поменять местами. Разделите "
               "пробелом или абзапцом.\n %  ";
  for (int u = 0; u < 2; u++) {
    std::cin >> the_nums[u];
  }
  regist = dynaarr[the_nums[0] - 1];
  dynaarr[the_nums[0] - 1] = dynaarr[the_nums[1] - 1];
  dynaarr[the_nums[1] - 1] = regist;
  std::cout << "\nПоменялись местами: " << dynaarr[the_nums[1] - 1] << " и "
            << dynaarr[the_nums[0] - 1] << '\n';
}

void t5() {
  int size;
  int regist;
  int ka = 0;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::vector<int> rraanyd(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::cout << "Массив:\n";
  for (int j = 0; j < size; j++) {
    std::cout << dynaarr[j] << ' ';
  }
  std::cout << "\nМассив в обратном порядке:\n";
  for (int u = size; u > 0; u--) {
    std::cout << dynaarr[u - 1] << ' ';
  }
  std::cout << '\n';
}

void t6() {
  int size;
  int min;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  min = dynaarr[0];
  std::cout << "Массив:\n";
  for (int i = 0; i < size; i++) {
    std::cout << dynaarr[i] << ' ';
  }
  std::cout << "\nНаименьший элемент:\n";
  for (int i = 1; i < size; i++) {
    if (dynaarr[i] < min) {
      min = dynaarr[i];
    }
  }
  std::cout << min << '\n';
}

void t7() {
  int size;
  int max;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  max = dynaarr[0];
  std::cout << "Массив:\n";
  for (int i = 0; i < size; i++) {
    std::cout << dynaarr[i] << ' ';
  }
  std::cout << "\nНаибольший элемент:\n";
  for (int i = 1; i < size; i++) {
    if (dynaarr[i] > max) {
      max = dynaarr[i];
    }
  }
  std::cout << max << '\n';
}

void t8() {
  int size;
  int min, max;
  int trak_min = 0, trak_max = 0;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  min = dynaarr[0];
  max = dynaarr[0];
  std::cout << "Массив:\n";
  for (int j = 0; j < size; j++) {
    std::cout << dynaarr[j] << ' ';
  }
  std::cout << "\nНаименьший элемент:\n";
  for (int k = 0; k < size; k++) {
    if (dynaarr[k] < min) {
      min = dynaarr[k];
      trak_min = k;
    }
    if (dynaarr[k] > max) {
      max = dynaarr[k];
      trak_max = k;
    }
  }
  dynaarr[trak_min] = max;
  dynaarr[trak_max] = min;
  std::cout << "Наибольшее и наименьшие числа поменялись местами:\n";
  for (int l = 0; l < size; l++) {
    std::cout << dynaarr[l] << ' ';
  }
  std::cout << "\n";
}

void t9() {
  int size;
  int to_del;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::vector<int> dynaarr_minus_1(size - 1);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::cout << "Введите номер элемента который вы хотите удалить. От 1 до "
            << size << ".\n %  ";
  std::cin >> to_del;
  std::cout << "Изначальный массив:\n";
  for (int i = 0; i < size; i++) {
    std::cout << dynaarr[i] << ' ';
  }
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (dynaarr[i] == dynaarr[to_del - 1]) {
      continue;
    }
    dynaarr_minus_1[j] = dynaarr[i];
    j++;
  }
  std::cout << "\nМассив без элемента с номером который вы указали:\n";
  for (int i = 0; i < size - 1; i++) {
    std::cout << dynaarr_minus_1[i] << ' ';
  }
  std::cout << "\n";
}

void t10() {
  int size;
  int j = 0;
  int after_school;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::vector<int> dynaarr_after_school(size * 2 + 1);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::cout << "Введите какое значение вы хотите добавить после каждого "
               "элемента и добавить.\n %  ";
  std::cin >> after_school;
  std::cout << "Массив:\n";
  for (int i = 0; i < size; i++) {
    std::cout << dynaarr[i] << ' ';
  }
  for (int i = 0; i < size; i++) {
    dynaarr_after_school[j] = dynaarr[i];
    dynaarr_after_school[j + 1] = after_school;
    j += 2;
  }
  dynaarr_after_school[size * 2] = after_school;
  std::cout << "\nМассив с изменениями:\n";
  for (int i = 0; i < size * 2 + 1; i++) {
    std::cout << dynaarr_after_school[i] << ' ';
  }
  std::cout << '\n';
}

void t11() {
  int size;
  int regist = 0;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::vector<int> dynaarr_doppelganger = dynaarr;
  std::cout << "Массив:\n";
  for (auto a : dynaarr) {
    std::cout << a << ' ';
  }
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (dynaarr[j] > dynaarr[j + 1]) {
        regist = dynaarr[j];
        dynaarr[j] = dynaarr[j + 1];
        dynaarr[j + 1] = regist;
      }
    }
  }
  std::cout << "\nОтсортированный массив:\n";
  for (auto a : dynaarr) {
    std::cout << a << ' ';
  }
  std::cout << '\n';
}

void t12() {
  int size;
  int regist = 0;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  std::vector<int> dynaarr(size);
  std::cout << "Введите значения массива в целых числах разделив их либо "
               "абзапцами, либо пробелами.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> dynaarr[i];
  }
  std::vector<int> dynaarr_doppelganger = dynaarr;
  std::cout << "Массив:\n";
  for (auto a : dynaarr) {
    std::cout << a << ' ';
  }
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (dynaarr[j] < dynaarr[j + 1]) {
        regist = dynaarr[j];
        dynaarr[j] = dynaarr[j + 1];
        dynaarr[j + 1] = regist;
      }
    }
  }
  std::cout << "\nОтсортированный массив:\n";
  for (auto a : dynaarr) {
    std::cout << a << ' ';
  }
  std::cout << '\n';
}

void t13() {
  char glasny_letters[6] = "aeiou";
  int size;
  char regist;
  std::cout << "Введите размер динамического массива целых чисел.\n %  ";
  std::cin >> size;
  char english[size];
  std::vector<char> copy;
  std::cout << "Введите значения массива в английских буквах.\n %  ";
  for (int i = 0; i < size; i++) {
    std::cin >> english[i];
  }
  std::cout << "Массив:\n";
  for (auto a : english) {
    std::cout << a;
  }
  for (auto const &letter : english) {
    if (strchr(glasny_letters, letter)) {
      copy.push_back(letter);
    }
  }
  for (auto const &letter : english) {
    if (!strchr(glasny_letters, letter)) {
      copy.push_back(letter);
    }
  }
  std::cout << "\nРезультат:\n";
  for (auto a : copy) {
    std::cout << a;
  }
  std::cout << '\n';
}
void t14() {
  std::string handle_input;
  std::cout << "Введите число:\n %  ";
  std::cin >> handle_input;
  int size = handle_input.size();
  std::cout << "Количество цифр: " << size << '\n';
  std::vector<int> digits(size);
  for (int i = 0; i < size; i++) {
    digits[i] = handle_input[i] - '0';
  }
  std::cout << "\nМассив цифр: ";
  for (int i = 0; i < size; i++) {
    std::cout << digits[i] << " ";
  }
  std::cout << '\n';
}

int main() {
  int exec_task;
  std::cout << "Введите какое задание вы хотите запустить.\nНа выбор: от 1 до 14\n %  ";
  std::cin >> exec_task;
  switch (exec_task) {
  case 1:
    t1();
    break;
  case 2:
    t2();
    break;
  case 3:
    t3();
    break;
  case 4:
    t4();
    break;
  case 5:
    t5();
    break;
  case 6:
    t6();
    break;
  case 7:
    t7();
    break;
  case 8:
    t8();
    break;
  case 9:
    t9();
    break;
  case 10:
    t10();
    break;
  case 11:
    t11();
    break;
  case 12:
    t12();
    break;
  case 13:
    t13();
    break;
  case 14:
    t14();
    break;
  }
}
