第16章
======

16.1 小节
---------

### 16.01

编写一个模板返回形参的绝对值。至少用三种不同类型的值调用模板。注意：在
第 16.3 节讨论编译器怎样处理模板实例化之前，你应该将每个模板定义和该模
板的所有使用放在同一文件中。

 
### 16.2: 

编写一个函数模板，接受一个 ostream 引用和一个值，将该值写入流。用至少
四种不同类型调用函数。通过写至 cout、写至文件和写至 stringstream 来测
试你的程序。

 
### 16.3: 

当调用两个 string 对象的 compare 时，传递用字符串字面值初始化的两个
string 对象。如果编写以下代码会发生什么？

    compare ("hi", "world");
