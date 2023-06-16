/*  使用指南
0、本项目的测试机，必须配套使用 谷歌测试机！
1. 修改包名：（即下面的内容）
 在game.h, 修改GamePackageName为游戏包名

2. 编译模块：直接run，不要做clean、切换等危险操作
 运行:module:assembleRelease
 产物：Zygisk-Il2CppDumper\out\Zygisk_Game.zip
3. 发送模块：复制到cmd，运行即可

adb push F:\gp\Zygisk-Il2CppDumper\out\Zygisk_Game.zip /sdcard/Download/

4. 安装使用：根据流程，自动使用即可
 打开Magisk，忽略主页的内容。进入 模块-本地安装-新模块，然后会提示需要重启
5. 获取结果：
 手机重启后，启动游戏。多玩一会儿，在 '/data/data/游戏包名/files/目录下生成dump.cs'

**************** 注意 ****************
0、慎用 Clean Project，里面存在不同的模块版本！！！！！
1、模块自带的日志过滤为：Perfare，可以观察是否dump完毕。
2、放到 Download 目录，为了快速的安装模块。
3、如果要对指定的游戏，需要使用 Zygisk_Defaut.zip。
*/

#ifndef ZYGISK_IL2CPPDUMPER_GAME_H
#define ZYGISK_IL2CPPDUMPER_GAME_H

#define GamePackageName "com.studio27.MelonPlayground"

#endif //ZYGISK_IL2CPPDUMPER_GAME_H
