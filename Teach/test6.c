nclude <stdio.h>
#include <string.h>

int main() {
       char str[5][50], temp[50];
          printf("输入5个字符串: ");

             //获取字符串输入
             //   for (int i = 0; i < 5; ++i) {
             //         fgets(str[i], sizeof(str[i]), stdin);
             //            }
             //
             //               //按字典顺序存储字符串
             //                  for (int i = 0; i < 5; ++i) {
             //                        for (int j = i + 1; j < 5; ++j) {
             //
             //                                 //交换字符串（如果它们不在字典顺序中）
             //                                          if (strcmp(str[i], str[j]) > 0) {
             //                                                      strcpy(temp, str[i]);
             //                                                                  strcpy(str[i], str[j]);
             //                                                                              strcpy(str[j], temp);
             //                                                                                       }
             //                                                                                             }
             //                                                                                                }
             //
             //                                                                                                   printf("\n按照字典的顺序: \n");
             //                                                                                                      for (int i = 0; i < 5; ++i) {
             //                                                                                                            fputs(str[i], stdout);
             //                                                                                                               }
             //                                                                                                                  return 0;
             //                                                                                                                  }
             //                                                                                                      }
             //                                          }
             //                        }
             //                  }
             //   }
}
