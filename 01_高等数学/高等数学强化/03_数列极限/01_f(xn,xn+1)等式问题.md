# 也就是遇见f(xn,xn+1)=0 之间的问题分析

- # 数列等式的解决方法 ： 1. 压缩映射问题 如何想到 如何做 2.如果不易求导 或者 |f'(x)| >= 1 怎么办
    <details>
      <summary style="font-weight: bold; color: #007bff;">展开答案</summary>
      <ul>    <li style="color: blue;">xn+1 =f(xn) ,f(x)很好求导 并且导函数满足 |f'(x)| &le; k &lt; 1 那么通过压缩映射 可以直接得出 {xn}收敛 也就是f趋向某点 （这里要求得出一个严格小于1的数 而不是变量）</li>
      <li style="color: blue;">看到是 xn+1 = f(xn) 的等式 那么直接看看f是不是简单求导 如果是 就划为经典形式</li>
      <li style="color: blue;">三步走即可 ： 看看是不是xn+1=f(xn) 看看f(x)是不是易于求导 求导看看 是不是|f'(x)| &le; k &lt;1 如果是 直接按照压缩映射步骤走即可 </li>
      </ul>
    </details>
    
- # 数列等式的解决方法 ： 2.如果不易求导 或者 |f'(x)| >= 1 怎么办 存在哪些尝试定单调的方法：【直接定单调和 做差定单调 做商 通过题设提示判别】 如果极限求出是2个 如何舍去
    <details>
      <summary style="font-weight: bold; color: #007bff;">展开答案</summary>
      <ul>    
      <li style="color: blue;">如果 2 3 步骤全不满足 那么不能通过压缩映射实现  转为通过单调有界准则实现 </li>
      <li style="color: blue;">尝试方法1：直接比较xn和xn+1的大小 确定单调性 通过题目的 取值范围和等式性质 如果是 根号的 要想到 有理化</li>
      <li style="color: blue;">尝试方法2：等式如果通过 做差 与0的大小关系 可以化简 那么可以试试看做差 从而推出 不等关系从而定单调</li>
      <li style="color: blue;">尝试方法3：等式如果xn和xn+1同号 那么尝试 做商   与1的大小关系 化简后 推出 不等关系</li>
      <li style="color: blue;">尝试方法4：如果是多个小问的大题 可能问题一进行提示了 放缩 要试试看通过问题1 带入计算</li>
      <li style="color: blue;">确定单调递增有上界 单调递减有下界 得到极限</li>
      <li style="color: blue;"> 并且如果是通过解一元二次方程得到的 是需要舍弃不是 单调有界得到的解 比如 0 是下界 1是上界 并且我们通过单调减少有下界得到的极限等式 解为 1和0 那么我们应该舍弃1</li>
      <li style="color: blue;">上面3 的证明是 如果 f单调减少 并且极限为A 那么f一定 大于等于A 如果单调增 那么就是 小于等于A 通过这个定理即可舍去(所以为什么要舍去 也要考虑</li>
      </ul>
    </details>
