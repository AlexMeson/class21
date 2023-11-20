使用Qtcreator建立 不包含任何组件的纯C++项目
在建立项目时 选择Non-Qt project -> Plain C++ Application

Location -> 为项目命名 / 指定存储路径
Build System -> 使用默认的qmake即可
Kits -> 选择可用的套件 Desktop Qt 5.XX.XX MinGW 64-bits

项目创建完成后，目录中生成的文件
<project_name.pro>      -- qt工程文件 -- 详细描述项目中的文件结构、启用组件、编译参数等
<project_name.pro.user> -- 项目环境配置文件
	一般该文件会在一台计算机对该项目进行环境配置后生成
	如果在计算中打开外部的项目，需要删除该文件重新配置


