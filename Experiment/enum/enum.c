/*
 * @功能模块与目的: 
 * @版本: 
 * @开发者: 高嘉伟(gaojw20@mails.tsinghua.edu.cn)
 * @Date: 2022-03-06 01:21:00
 * @版权信息: 
 * @最后修改者: 高嘉伟(gaojw20@mails.tsinghua.edu.cn)
 * @LastEditTime: 2022-03-06 01:25:47
 * @修改日志: 
 * @备注: 
 */
#include<stdio.h>
enum LIGHT_STATE0{
    L0_ON = 0x1,
    L1_ON = 0x2,
    L2_ON = 0x4,
    L3_ON = 0x8,
    L4_ON = 0x10,
    L5_ON = 0x20,
    L6_ON = 0x40,
    L7_ON = 0x80
};

enum LIGHT_STATE1{
    L0_OFF = 0x1,
    L1_OFF = 0x2,
    L2_OFF = 0x4,
    L3_OFF = 0x8,
    L4_OFF = 0x10,
    L5_OFF = 0x20,
    L6_OFF = 0x40,
    L7_OFF = 0x10000000000000000
};

int main(){
    enum LIGHT_STATE0 L0;
    enum LIGHT_STATE1 L1;
    printf("%d\n", sizeof(L0));
    printf("%d\n", sizeof(L1));
}