# The Modern C++ Challenge Become an expert programmer by solving real-world problems

Learning CMake, Doxygen, Google Test and GitHub Actions.

Also collecting interview quesitons.

# 前言

C++是一种通用编程语言，结合了不同的编程范式，如面向对象、命令式、泛型和函数式。C++是为效率而设计的，是性能至上的应用程序的首选。在过去的几十年中，C++一直是工业界、学术界和其它领域中使用最广泛的语言之一。C++由国际标准化组织（International Organization for Standardization，ISO）进行标准化，目前正在制定下一版本的标准，称为C++20，计划于2020年完成。

C++语言标准近1500页，所以并不是最容易学习和掌握的语言。技能不是仅通过阅读或观看别人获得的，而是通过反复练习获得的。编程也一样：开发人员不能仅通过阅读书籍、文章或观看视频教程来学习新的语言或技术，相反，我们需要练习来沉淀和发展我们所学的新事物，这样才能最终掌握它们。然而很多时候，找到好的练习来检验我们的知识水平也是一件麻烦的事情。尽管许多网站都有针对不同编程语言的编程问题，但其中大多数是数学题、算法题或竞赛题，这些类型的问题并不能帮助你使用大量的编程语言功能。这就是写作本书的原因。

这本书收集了100个真实世界中的问题，专为练习C++语言特性、标准库功能以及第三方跨平台库而设计。诚然，其中一些问题是C++特有的，通常情况下可以使用其它编程语言解决，不过主要目的还是帮助读者掌握C++，因此读者需要使用C++解决这些问题。书中提供的所有解决方案都是用C++语言编写的，但是当学习其它编程语言时，也可以将本书中收集的问题用作参考，只是在这种情况下，不太能从书中的解决方案受益。

本书中的问题分为12章，每章都包含类似或相关主题的问题。问题难度各不相同：有容易的，有中等的，也有困难的，每个难度等级的问题数量基本相同。每章首先描述问题，然后是这些问题的解决方案，随之而来还有建议、解释和源代码。虽然读者可以在书中找到解决方案，但还是建议先尝试自己实现。如果遇到困难，再查看建议的解决方案。书中提供的源代码故意省略了头文件，这样有助于自己理解。另一方面，随书提供的源代码是完整的，里面包含了所需要的头文件。

在撰写本书时，C++20的标准正在制订中。不过已经通过投票选出了一些新特性，其中一个是对`std::chrono`库的扩展，使其支持日历和时区。第5章中有几个关于这个主题的问题，虽然还没有编译器支持，但可以使用`date`库，因为新标准中的内容是基于此设计的。为了解决书中的问题，还需要其它库的支持，包括[`Asio`](https://think-async.com/Asio/index.html)、[`Crypto++`](https://www.cryptopp.com/)、[`Curl`](https://curl.se/)、[`NLohmann/json`](https://github.com/nlohmann/json)、[`PDF-Writer`](https://github.com/galkahana/PDF-Writer)、[`PNGWriter`](https://github.com/pngwriter/pngwriter)、[`pugixml`](https://pugixml.org/)、[`SQLite`](https://www.sqlite.org/index.html)和`ZipLib`。除此此外，读者可以使用[`Boost`](https://www.boost.org/)作为本书中使用的`std::optional`和`filesystem`的替代品。上面提到的所有库都是开源和跨平台的，选择它们是因为性能良好、文档丰富和使用广泛。读者也可以使用任何其它的库来解决这些问题。

## 目标读者

本书是为实践C++而撰写的，也是为学习C++而撰写的。无论读者是否有其它编程语言的经验，本书都是实践和解决实际问题的宝贵资源。本书没有教授语言或标准库的特点，读者需要从其它地方（如书籍、文章或视频教程）中了解这这些。这本书需要读者利用以前从其它地方学到的技能来解决各种问题。尽管如此，本书中的许多问题都与语言无关，在学习其它编程语言时也可以参考，只是在这种情况下，读者不会从书中提供的解决方案中获益。

## 本书包含的内容

- 第1章，数学问题，包含一系列的数学问题，作为后面内容的铺垫。

- 第2章，语言特性，涉及运算符重载、移动语义、用户定义字符串和模板元编程（包括可变参数函数、折叠表达式和类型特性模板）。

- 第3章，字符串和正则表达式，包含字符串操作方面的几个问题，例如在字符串和其它数据类型之间转换、拆分和连接字符串，以及处理正则表达式。

- 第4章，流和文件系统，包含输出流处理和使用`filesystem`操作文件和目录。

- 第5章，日期和时间，为C++20中的`chrono`做准备，包含几个时间和时区问题，可以使用`date`库来解决。

- 第6章，算法和数据结构，是内容最多的章节之一，包含各种需要利用标准算法的问题，也包含需要自己实现的通用算法或数据结构，例如环形缓冲区和优先级队列。本章结尾部分包含两个很有趣的问题，Dawkins' Weasel程序和Conway's Game of Life程序，据此可以学习进化算法（evolutionary algorithms）和细胞自动机（cellular automata）。

- 第7章，并发，使用线程和异步函数来实现通用的并行算法，也解决了一些并发相关的实际问题。

- 第8章，设计模式，提出了一系列适合使用装饰模式、复合模式、责任链模式和模板方法解决的问题。

- 第9章，数据串行化，涵盖了最常见的序列化数据格式问题，例如JSON和XML，还有创建PDF文件，所有都使用第三方开源跨平台库。

- 第10章，压缩，图像和数据库，涉及zip压缩存档、创建PNG文件（如Captcha的系统和条形码）以及在应用程序中嵌入和使用SQLite数据库方面的问题。

- 第11章，密码学，使用Crypto++库对数据进行加密和签名，还要实现自己的Base64编码和解码程序。

- 第12章，网络和服务，通过TCP/IP实现自己的客户端、服务器程序，使用各种REST服务，例如比特币交换或文本翻译API。

## 如何使用本书

读者需要对C++语言和标准库有一个基本的了解才能使用本书，或者也可以同时学些。无论如何，本书只涉及如何解决问题，但不涉及解决方案中使用的语言特性。读者需要一个支持C++17标准的编译器，所需要的库以及可用的编译器在随书资源的Software Hardware List中。下面将介绍如何下载和构建本书代码。

## 下载

[GitHub](https:/​/​github.​com/PacktPublishing/​The-​Modern-​Cpp-​Challenge)

## 构建

尽管书中使用了大量第三方库，但所有库以及书中提供的解决方案都是跨平台的。代码在Windows 10上（使用Visual Studio 2017 v15.6/7）和Mac OS 10.13.x上（使用Xcode 9.3）测试通过。

在Xcode中包含的LLVM工具集中，有两个特性是不可用的：`filesystem`和`std::optional`。不过它们是基于`Boost.Filesystem`和`Boost.Optional`设计的，所以可以很方便的将解决方案中的实现替换为[`Boost`](https://www.boost.org/)中的实现。随书代码使用条件编译宏来对上述两种方案进行选择。下面提供了构建说明，源代码中也包含相同的信息。

为了支持大多数开发环境和在各种平台上构建，源代码使用`CMake`编译，可以从[https:/​/​cmake.​org/​](https:/​/​cmake.​org/​)获取。下面是使用CMake生成Visual Studio和Xcode构建脚本的说明，其它工具链请参阅CMake官方文档。

### 使用Visual Studio 2017构建

```
cmake -G "Visual Studio 15 2017" .. -DCMAKE_USE_WINSSL=ON -DCURL_WINDOWS_SSPI=ON -DCURL_LIBRARY=libcurl -DCURL_INCLUDE_DIR=..\libs\curl\include -DBUILD_TESTING=OFF -DBUILD_CURL_EXE=OFF -DUSE_MANUAL=OFF
```

如果使用`Boost.Filesystem`和`Boost.Optional`：

```
cmake -G "Visual Studio 15 2017" .. -DCMAKE_USE_WINSSL=ON -DCURL_WINDOWS_SSPI=ON -DCURL_LIBRARY=libcurl -DCURL_INCLUDE_DIR=..\libs\curl\include -DBUILD_TESTING=OFF -DBUILD_CURL_EXE=OFF -DUSE_MANUAL=OFF -DBOOST_FILESYSTEM=ON -DBOOST_OPTIONAL=ON -DBOOST_INCLUDE_DIR=<path_to_headers> -DBOOST_LIB_DIR=<path_to_libs>
```

### 使用Xcode构建

安装OpenSSL和Boost后：

```
cmake -G Xcode .. -DOPENSSL_ROOT_DIR=<path_to_headers> -DOPENSSL_INCLUDE_DIR=<path_to_libs> -DBUILD_TESTING=OFF -DBUILD_CURL_EXE=OFF -DUSE_MANUAL=OFF -DBOOST_FILESYSTEM=ON -DBOOST_OPTIONAL=ON -DBOOST_INCLUDE_DIR=<path_to_headers> -DBOOST_LIB_DIR=<path_to_libs>
```

### 在Ubuntu构建（不是书中的步骤）

安装`libssl-dev`、`libcrypt-dev`后：

```
cmake .. -DCURL_LIBRARY=libcurl -DCURL_INCLUDE_DIR=../libs/curl/include -DBUILD_TESTING=OFF -DBUILD_CURL_EXE=OFF
```

- curl中有些测试代码有问题，需要通过`-DBUILD_TESTING=OFF`来解决
- curl库有问题，需要通过`-DBUILD_CURL_EXE=OFF`来解决

**构建中会出现关于curl的错误，试了很多遍，都不能完整构建，失败的原因在于构建`Chapter05/problem_43`时，`libs/date/src/tz.cpp`中无法找到curl相关的头文件和库**。

除此之外，构建过程中还有几个可以解决的问题：

1. `CMakelists.txt`中的目录大小写有误，应该是因为作者测试的平台目录大小写不敏感；还需要修改标准库为`-std=c++17`
2. `libs/cryptopp`的编译可能会报`always_inline`的错误，需要通过宏`CRYPTOPP_DISABLE_ASM`来禁用SSE指令集
3. `Chapter01/problem_08/main.cpp`中需要包含`<functional>`
4. `Chapter02/problem_20/main.cpp`中需要包含`<algorithm>`
5. `Chapter04/problem_38/main.cpp`依赖于uuid，需要安装`uuid-dev`，同时`libs/stduuid.h`中需要包含`<cstring>`
6. `Chapter05/problem_39/main.cpp`中需要包含`<functional>`
