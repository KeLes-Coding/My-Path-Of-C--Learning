# p205 附录A

# p255 附录B

# 01  什么是class

用户自定义的数据类型（user-defined data type），<u>增强类型抽象化的层次</u>
    
    class定义应该分为两部分
    （1）头文件（header file）——用来声明该class的各种操作行为
    （2）代码文件（program text）——包含了操作行为的具体实现

# 02  对象初始化方式
    （1）使用=运算符，如int num_tries = 0
        源自C语言
    （2）构造函数语法，如int num_right(0)
        解决“多值初始化”问题
        使内置类型与class类型的初始化方式得到统一   
