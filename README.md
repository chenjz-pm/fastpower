# **fastpower，一个快速执行windows电源操作的程序**
## 更新日志
- dev build 1:调用NtAPI —— NtShutdownSystem 实现快速关机（直接黑屏）。由于代码出现不知名bug，所以仅支持关机。
  <br>程序运行方法：直接运行fastpower.exe.
- stable build 2:API更换为 NtInitiatePowerAction ，可实现快速关机，重启，睡眠等功能。程序可以实现睡眠，休眠，关机，重启，关机断电共5种功能。
  <br>程序运行方法： &nbsp; fastpower [mode] &nbsp;&nbsp; mode:{ sleep | sl }(睡眠),{ hibernate | hi }(休眠),{ shutdown | sh }(关机),{ reboot | re }(重启),{ shutdownoff | so },(关机断电)
