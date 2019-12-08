# 使用过程中遇到的问题

1. pacman无法锁定数据库

   > ![image-20191201233304538](/home/jona/.config/Typora/typora-user-images/image-20191201233304538.png)
   >
   > 问题原因: 同步数据库时手动强制停止同步, 导致之前进程锁文件未释放
   >
   > 解决方案: 删除 /var/lib/pacman/db.lck 文件, 即可恢复


2. lib32 依赖安装时的问题

   > 1. deepin的wine服务于lib32冲突
   >
   >    > ![image-20191201234825237](/home/jona/.config/Typora/typora-user-images/image-20191201234825237.png)
   >    >
   >    > 
   >    >
   >    > ![image-20191201235106893](/home/jona/.config/Typora/typora-user-images/image-20191201235106893.png)
   >    >
   >    > 解决方案: 将deppin.com.qq.office卸载后,将其依赖 deepin-wine卸载即可
   >
   > 2. 

3. 磁盘未成功挂载无法开机

   >问题原因: 可能由于未正常关机造成
   >
   >解决方案: 重新扫描磁盘即可
   >
   >