//
// Created by Perfare on 2020/7/4.
//

/*  使用指南
1. 修改包名：在game.h, 修改GamePackageName为游戏包名
2. 编译模块：运行:module:assembleRelease（结果zip包生成在out文件夹）
3. 发送模块：adb push F:\gp\ZygiskIl2CppDumper\out\Zygisk_Game.zip /sdcard/Download/
3. 安装使用：打开Magisk，本地安装我们的新模块，然后会提示需要重启
4. 获取结果：手机重启后，启动游戏。多玩一会儿，在‘/data/data/游戏包名/files/目录下生成dump.cs’

技巧：
0、慎用 Clean Project，里面存在不同的模块版本
1、没有日志可供参考，不需要开启logcat。模块自带的日志标志为：Perfare
2、放到 下载 目录，为了快速的安装模块
3、如果要对指定的游戏，需要使用 Zygisk_Defaut.zip
*/

#ifndef ZYGISK_IL2CPPDUMPER_GAME_H
#define ZYGISK_IL2CPPDUMPER_GAME_H

#define GamePackageName "com.game.packagename"

#endif //ZYGISK_IL2CPPDUMPER_GAME_H
