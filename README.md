# **fastpower，一个快速执行windows电源操作的程序**
## 参考资料
1. <https://gitee.com/Gauterman/quick-shutdown-q>
## 更新日志
- build 3 bugfixed 1更新：修复build3已发现bug
<br>

- 04/11/23补充，build3存在bug，只能关机，马上发布bug fixed版本
<br>

- stable build 3: 基本功能不变，新增 -t ( 或 -time ) 功能，可以延时关机。
<br>程序运行方法： &nbsp; fastpower [option] [mode]
<br> [option]: \[ -t | -time ] t (t毫秒后执行操作)
<br> [mode] : \[ sleep | sl ](睡眠),\[ hibernate | hi ](休眠),\[ shutdown | sh ](关机),\[ reboot | re ](重启),\[ shutdownoff | so ],(关机断电)
<br>

- stable build 2: API更换为 NtInitiatePowerAction ，可实现快速关机，重启，睡眠等功能。程序可以实现睡眠，休眠，关机，重启，关机断电共5种功能。
<br>程序运行方法： &nbsp; fastpower [mode]
<br>[mode] = \[ sleep | sl ](睡眠),\[ hibernate | hi ](休眠),\[ shutdown | sh ](关机),\[ reboot | re ](重启),\[ shutdownoff | so ],(关机断电)
<br>


- dev build 1: 调用NtAPI —— NtShutdownSystem 实现快速关机（直接黑屏）。由于代码出现不知名bug，所以仅支持关机。
<br>程序运行方法：直接运行fastpower.exe.
<br>


