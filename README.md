# Parand Data Structure and Algorithm Competitive Practice

<!-- [english](#Intro) -->

# مقدمه

این ریپو (Repository) برای ثبت سوال و جواب‌های قرار گرفته در تاپیک الگوریتم (DSA: Data Structures & Algorithms) گروه کانون برنامه‌نویسی پرند ایجاد شده؛ علاوه بر این‌ها، توضیح مختصر راجب ICPC و مسابقات الگوریتم، منابع موجود و بانک سوالات نیز تعبیه شده؛ سعی میشه با توجه به منابع روز و مورد نیاز استفاده کننده‌ها، لیست منابع و محتویات توضیحات نیز به روز بشن.

دوستانی که بار اولشونه از گیت‌هاب استفاده می‌کنن و می‌خوان با گیت و گیت‌هاب آشنایی پیدا کنن، می‌تونن از لینک‌های زیر کمک بگیرن:

> https://www.theodinproject.com/lessons/foundations-setting-up-git

> https://www.theodinproject.com/lessons/foundations-introduction-to-git

> https://www.theodinproject.com/lessons/foundations-git-basics

<!--
آموزش‌های الگوریتم برنامه‌نویسی فقط راه حل مسائل نیستند؛ آنها یک مسیر کارآمد برای تکمیل وظایف، تجزیه و تحلیل مجموعه داده‌های پیچیده و وارد کردن داده‌ها ارائه می دهند؛ آنها هستۀ برنامه‌نویسی را تشکیل می‌دهند که بدون آنها احتمالاً دنیای فناوری محور وجود نخواهد داشت.

اهمیت الگوریتم در مصاحبۀ برخی حوزه‌ها -->

## فهرست

- [ توضیح عملکرد ریپو](#توضیح-ریپو-repository)

- [مسابقات](#آی-سی-پی-سی-icpc)

- [منابع](#منابع-آموزشی-و-سوالات)

# توضیح ریپو (Repository)

سوال‌ها به ترتیب قرارگیری در گروه و ریپو شماره‌گذاری می‌شوند.
به طور مثال `01` به معنی فایل اولیۀ قرار داده شده در گروه و ریپو است؛ در ادامه به بقیۀ دسته‌بندی‌ها می‌پردازیم:

## سختی سوال‌ها

سختی سوال‌ها بعد از شماره‌ی آن در اسم ذکر شده که به ترتیب زیر است:

| پسوند | میزان سختی |
| ----- | ---------- |
| A     | آسان       |
| B     | متوسط      |
| C     | سخت        |

> `01A`

    	حرف A بعد از شماره‌ی سوال به معنی آسان بودن سوال است.

## موضوع‌های سوالات

سوالات الگوریتم موضوع‌های زیادی دارن و درکل موضوع مهم در اون‌ها، طرز فکر و طریقۀ پیاده‌سازی هست. البته که گاهی یک مسئله می‌تونه به چند روش مختلف حل بشه، ولی به طور معمول در ۹ دسته زیر میشه اون‌ها رو طبقه‌بندی کرد (با اسم الگوریتم‌ها به مرور زمان آشنا می‌شین و جای نگرانی نیست؛ یه سری از اون‌ها رو شایدم استفاده می‌کنین و فقط اسمشونو نمی‌دونین):

### لیست موضوعات

#### رشته

الگوریتم‌های تغییر و پیمایش بر روی رشته‌ها، رابطه‌ی نزدیکی با الگوریتم‌های جستجو دارد؛ موضوع طریقۀ پیاده‌سازی در این نوع سوال‌ها پررنگ‌تر است؛ مثال الگوریتم‌ها:

> Knuth Morris Pratt(KMP), Z algorithm, Suffix arrays/Suffix trees. These are bit advanced algorithms.

#### گراف

این دسته از سوالات ارتباط نزدیکی با نظریۀ ماتریس‌ها و ساختمان داده دارند؛ به ویژه درخت‌ها و الگوریتم جستجو در آنها؛ مثال الگوریتم‌ها:

> Breadth first search(BFS), Depth first search(DFS), Strongly connected components(SCC), Dijkstra, Floyd-Warshall, Minimum spanning tree(MST), Topological sort.

#### برنامه‌نویسی پویا

برنامه‌نویسی پویا (Dynamic Programming) در کل درنظر دارد تا از محاسبه‌ی اضافی جلوگیری کند؛ اغلب سوالات برنامه‌نویسی پویا با تکرار و با استفاده از روابط بازگشتی (Recursion) قابل حل هستند، ولی اینگونه حل بهینه نبوده و با پیاده‌سازی‌های خاص، روش‌های بهینه برای اینکار وجود دارد؛ مثال الگوریتم‌ها:

> Standard dynamic programming problems such as Rod Cutting, Knapsack, Matrix chain multiplication etc.

##### نظریۀ اعداد

مجموعه روش‌های رسیدن به اعداد مورد نظر با توجه به تئوری‌های این حوزه؛ به جای استفاده از متد Brute-force (در نظر گرفتن تمام حالت‌ها و ادامه دادن تا رسیدن به جواب) و امتحان تمام حالت‌های مساعد با شرط سوال، از شرط سوال عددهای مدنظر را تولید می‌کنیم؛ این مجموعه روش‌ها ارتباط نزدیکی با برنامه‌نویسی پویا دارند؛ مثال الگوریتم‌ها:

> Modular arithmetic, Fermat’s theorem, Chinese remainder theorem(CRT), Euclidian method for GCD, Logarithmic Exponentiation, Sieve of Eratosthenes, Euler’s totient function.

#### حریصانه

الگوریتم‌های حریصانه (Greedy algorithms) با توجه به اختصاص معیار (Heuristic value)، در هر مرحله سعی می‌کند بهترین گزینه برای الگوریتم را انتخاب کند؛ مثال الگوریتم‌ها:

> Standard problems such as Activity selection.Standard problems such as Activity selection.

#### جستجو

مجموعه الگوریتم‌های مربوط به جستجو در یک دنباله؛ مثال الگوریتم‌ها:

> Binary search, Ternary search and Meet in the middle.

#### ساختمان داده

ساختمان‌های داده پایۀ حل مسائل الگوریتم هستند و انتخاب نوع داده درست در حل سوال آنچنان مؤثر است که معمولاً اینگونه سوال‌ها در دسته‌بندی مختص ساختمان داده قرار می‌گیرند؛ مثال از داده ساختارها:

> Data structures (Basic): Stacks, Queues, Trees and Heaps.
> Data structures (Advanced): Trie, Segment trees, Fenwick tree or Binary indexed tree(BIT), Disjoint data structures.

##### هندسه

بخشی از سوالات الگوریتم مربوط به مسائل ریاضی و به ویژه هندسه است؛ ولی به طور معمول دانش زیادی از ریاضی و هندسه مورد نیاز نیست و از قواعد ساده‌ی آن استفاده می‌شود؛ مثال:

> Graham-Scan for convex hull, Line sweep.

#### نظریۀ بازی‌ها

مجموعه سوالات الگوریتم که با توجه به قواعد و شرط‌های زیاد برای اجرا در این دسته قرار می‌گیرند؛ سوالات مربوط به بازی‌هایی مثل شطرنج با شرایط خاص در این دسته هستند؛ مثال‌ها:

> Basic principles of Nim game, Grundy numbers, Sprague-Grundy theorem.

### نمادها

| موضوع               | پسوند |
| ------------------- | ----- |
| Graph               | G     |
| String              | S     |
| Search              | R     |
| Number Theory       | N     |
| Dynamic Programming | D     |
| Greedy              | G     |
| Data Structure      | T     |
| Geometry            | M     |
| Game Theory         | A     |

> `01A-M`

    	سوال هندسۀ ساده

> `04B-GT`

    	سوال ساختمان داده و گراف متوسط

# آی سی پی سی (ICPC)

مسابقات بین‌المللی برنامه‌نویسی دانش‌جویی (ICPC) همه ساله به عنوان یکی از مهم‌ترین و معتبرترین مسابقات برنامه‌نویسی در سطح جهان برگزار می‌گردد؛ این مسابقات تا سال ۲۰۱۸ از سوی انجمن ماشین‌های محاسباتی و با پشتیبانی شرکت‌های بزرگی چون IBM برگزار می‌شد و با نام ACM-ICPC خوانده می‌شد. این مسابقات در ایران به اختصار به مسابقات ای‌سی‌ام معروف است. تیم‌های شرکت‌کننده در این مسابقات، دانشجویان دانشگاه‌های سرتاسر جهان هستند که ابتدا در مسابقات منطقه‌ای شرکت می‌کنند و سپس تیم‌های برگزیده جواز حضور در فینال را کسب می‌نمایند؛ مسابقۀ فینال معمولاً در اوایل بهار هر سال برگزار می‌شود؛ مسابقات منطقه‌ای غرب آسیا از سال ۱۳۷۸ تا کنون (به جز سال ۱۳۹۰) در دانشگاه صنعتی شریف برگزار شده است؛ مسابقه منطقه‌ای غرب آسیا عموماً در اواخر پاییز هر سال برگزار می‌شود.

> ویدئوی (یوتیوب) کامل برگزاری مسابقات فینال ICPC 2022 Dhaka [اینجا](https://www.youtube.com/watch?v=15Wyj_-PG9I)

در چنین مسابقاتی علاوه بر تسلط بر یکی از زبان‌های برنامه‌نویسی C++ ،Java ،Kotlin ،Python و C، (البته تضمین می‌شود تمام سوال‌ها به وسیلۀ C++ ،Java و C قابل حل باشند) مباحثی نظیر طراحی الگوریتم و ساختمان داده‌ها بسیار تأثیرگذار می‌باشند.

مسابقات بین‌المللی برنامه‌نویسی دانشجویی یک مسابقهٔ تیمی می‌باشد؛ قوانین موجود بیان می‌کنند که هر تیم باید شامل ۳ نفر باشد؛ شرکت‌کنندگان باید در دانشگاه مشغول به تحصیل باشند و کمتر از ۴ سال سابقهٔ حضور در دانشگاه داشته باشند؛ دانشجویانی که دو بار در مرحلهٔ جهانی حضور داشته‌اند نیز نمی‌توانند در مسابقه شرکت کنند؛ مدت مسابقه معمولاً ۵ ساعت (بسته به سختی و تعداد سوال می‌تواند تغییر کند) و تعداد سوالات، معمولاً بین ۸ تا ۱۲ سؤال می‌باشد؛ تیم‌ها که تنها یک رایانه در اختیار دارند، باید جواب‌های خود را در قالب کد به سیستم داوری خودکار ارسال کنند؛ سپس برنامه‌های ارسالی توسط داده‌ها مورد آزمایش قرار می‌گیرند؛ اگر برنامه‌ای نتواند در مقابل تمام داده‌ها پاسخ درستی بدهد مورد قبول قرار نمی‌گیرد و تیم با احتساب جریمه می‌تواند برنامه دیگری ارسال کند.

> ‌ برندگان گذشته مسابقات و اطلاعات رقابت آن سال [اینجا](https://icpc.global/community/world-finals-champions)

تیمی برنده است که بیشترین تعداد سوال‌ها را به درستی حل کند؛ اگر رتبه‌بندی تیم‌ها برای دریافت مدال و جوایز ضروری باشد، رتبه تیم با توجه به زمان سپری شده در هر مرحله برای ارسال پاسخ درست به علاوهٔ بیست دقیقه برای هر پاسخ نادرست که قبل از هر سوال حل شده ارسال شده، تعریف می‌شود.

به عنوان مثال شرایطی را برای دو تیم آبی و قرمز در نظر می‌گیریم؛ این دو تیم از نظر تعداد سوالات حل شده با یک دیگر برابر هستند؛ تیم قرمز پاسخ‌های خود را برای سوالات A و B به ترتیب در ۰۱:۰۰ و ۰۲:۴۵ پس از آغاز مسابقه ارسال کرده‌است؛ همچنین تیم قرمز یک پاسخ غلط برای سوال C ارسال کرده‌است اما چون نتوانستند سوال C را حل کنند این پاسخ غلط در نظر گرفته نمی‌شود. تیم آبی پاسخ‌های خود را برای سوالات A و C در ۰۱:۲۰ و ۰۲:۰۰ پس از آغاز مسابقه ارسال کرده‌است. همچنین تیم آبی یک ارسال غلط برای سوال C داشته‌است؛ نتیجه به این صورت ارزیابی می‌شود که تیم قرمز در مجموع ۳:۴۵ = ۰۱:۰۰ + ۰۲:۴۵ و تیم آبی در مجموع ۰۳:۴۰ = ۰۱:۲۰ + ۰۲:۰۰ + ۰۰:۲۰ زمان برای سوالات صرف کرده‌اند؛ در نتیجه تیم آبی برنده است. (برگرفته از ویکی‌پدیا و ICPC.global)

مسابقه‌ی منطقه‌ای تهران هر سال با شرکت ۸۰ تیم از دانشگاه‌های سراسر کشور برگزار می‌گردد؛ هرساله این مسابقات در پاییز در دانشگاه شریف برگزار می‌شود؛ برای شرکت تاریخ آن را با [سایت](https://ssc.ce.sharif.edu/pages/forms/%D8%AB%D8%A8%D8%AA-%D9%86%D8%A7%D9%85-%D8%AF%D8%B1-%D9%85%D8%B3%D8%A7%D8%A8%D9%82%D9%87-%D8%A7%D9%86%D8%AA%D8%AE%D8%A7%D8%A8%DB%8C-acm-icpc-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81/) مربوطه چک کنید؛ پس از پایان مهلت ثبت‌نام، نحوه‌ی انتخاب تیم‌ها از طریق ایمیل به شما اطلاع رسانی می‌شود.

> قوانین مسابقات ICPC منطقه‌ای [اینجا](https://icpc.global/regionals/rules)

> قوانین مسابقات ICPC فینال [اینجا](https://icpc.global/worldfinals/rules)

# منابع آموزشی و سوالات

برای دانلود کتاب آموزشی می‌تونین از سایت Libgenesis استفاده کنین.

<a href="https://www.libgen.is/"><p style="text-align: center">Library Genesis</p></a>

منابع آموزشی انگلیسی مربوط، خیلی زیاد هستن؛ منابع معروف که برای شروع مناسب هستن به صورت زیر طبقه‌بندی شدن:

## سایت‌های رقابت و بانک سوالات

تعداد سایت‌های برگزار کنندۀ مسابقات آنلاین بسیار زیاد است ولی سایت‌های معروف و آن‌هایی که مناسب دیده شده را اینجا ذکر کردیم:

- [Codeforces](https://codeforces.com/)

  > سایت معروف و قدیمی مربوط به مسابقات الگوریتم که کامیونیتی بسیاز بزرگی دارد.
  >
  > تعداد زیادی سوال در موضوعات مختلف در بایگانی دارد و مسابقات آن به صورت مداوم تشکیل می‌شود.
  >
  > توصیه می‌شود حتما ثبت‌نام کرده و به آن برای حل سوال سر بزنید.

- [Codechef](https://www.codechef.com/)

  > از سایت‌های محبوب حل سوال الگوریتم که بانک سوال قابل توجهی دارد و مسابقه‌ی آن به صورت مداوم و هفتگی، چهارشنبه‌ها برگزار می‌شود.
  >
  > توصیه می‌شود در آن مسابقات هفتگی شرکت شود و برای رقابت بیشتر می‌توانید نام دانشگاه خود را نیز وارد کرده تا وضعیت حل سوال هم دانشگاهی‌های خود را نیز ببینید.

- [Quera (کوئرا فارسی)](https://quera.org/)

  > سایت کوئرا کار خودش رو در تابستان ۹۴ با یک تیم سه‌نفره از دانشجوهای شریف شروع کرد؛ که بعدها به سایت جامعه‌ای برای برنامه‌نویسان تبدیل شد.
  >
  > این سایت علاوه بر بانک سوالات و مسابقات داخلی، دوره‌های آموزشی داشته و با تکمیل پروفایل می‌تونین برای شرکت‌ها رزومه بفرستین؛ وضعیت حل سوالات الگوریتم و رتبه مسابقات هم می‌تونه در قسمت رزومه از طرف کوئرا قرار بگیره.

- [Topcoder](https://www.topcoder.com/)
  > از سایت‌های قدیمی بوده که دوره‌های آموزشی مناسبی داشته و بانک سوالات نسبتاً خوبی داره.
  >
  > دسترسی به این سایت برای کاربران ایرانی گاهی می‌تونه مشکل باشه.

## سایت های آموزشی

- [Geeks for Geeks](https://www.geeksforgeeks.org/)

> سایت هندی بسیار معروف بین برنامه‌نویسان.
> سه بخش جالب توجه برای مسابقات الگوریتم لینک‌های زیر هستن:
>
> - [How to prepare for ACM – ICPC?](https://www.geeksforgeeks.org/how-to-prepare-for-acm-icpc/)
> - [Competitive Programming – A Complete Guide](https://www.geeksforgeeks.org/competitive-programming-a-complete-guide/)
> - [Complete Roadmap To Learn DSA From Scratch](https://www.geeksforgeeks.org/complete-roadmap-to-learn-dsa-from-scratch/)

- [CodeChef](https://www.codechef.com/)
  > کدشف سایت هندی آموزشی، بانک سوال و برگزار کنندۀ مسابقات هفتگی در دسته‌های مختلف است؛ که از داوری (Judge) SPOJ استفاده می‌کند.
  >
  > سایت بسیار مفیدی است و توصیه به شرکت در رقابت‌های آن می‌شود.
  > آموزش‌های رقابتی آن به زبان‌های برنامه‌نویسی مختلف وجود دارد.
- [TopCoder](https://www.topcoder.com/)

  > از سایت‌های قدیمی برگزاری رقابت‌های الگوریتمی و دوره‌های مربوط به آن برای مسابقات و مصاحبه‌های کاری است.

- Other Sources
  > - https://github.com/jwasham/coding-interview-university
  > - https://cp-algorithms.com
  > - https://silly-servant-943.notion.site/Data-Structures-and-Algos-da138a46aab3466f9f0b196f16375bc0
  > - https://roadmap.sh/computer-science

## کتب آموزشی

برای دانلود کتاب مورد نظر می‌تونین از سایت [libgensis](https://www.libgen.is/) استفاده کنین.

کتاب‌های متنوعی در این زمینه وجود دارد ولی ۴ کتاب معروف که پرطرفدار هستند به صورت زیر است:

### 1 Programming Challenges

![Programming Challenges
The Programming Contest Training Manual
By Steven S. Skiena, Miguel A. Revilla · 2003](misc/1.jpeg)

کتاب مناسبی برای شروع؛ همراه با تمرین‌ها.

### 2 Introduction to Algorithms(CLRS)

![Introduction To Algorithms
By Thomas H Cormen, Charles E Leiserson, Ronald L Rivest, Clifford Stein · 2001](misc/2.jpeg)

بهترین کتاب برای یادگیری الگوریتم، ولی متن آسانی برای شروع ندارد؛ معمولاً توصیه می‌شود قبل از شروع این کتاب، کتاب‌های دیگری در این زمینه‌ها مطالعه کرده باشید.

### 3 Algorithms unlocked

![Algorithms Unlocked
By Thomas H. Cormen · 2013](misc/3.jpeg).

همراه با توضیح ساده و مناسب برای شروع.

### 4 Competitive Programming

![Competitive Programming Felix](misc/4.jpeg)

این کتاب مختص مسابقات بوده و به سبک ICPC نزدیک‌تر است.

### نکته

> توصیه می‌شود برای شروع از کتاب‌های ۱ و ۳ (Algorithms unlocked و Programming Challenges) شروع کرده و بعداً سراغ کتاب‌های ۲ و ۴ (Introduction to Algorithms و Competitive Programming) بروید.

### 5 Art of Programming Contest

![Art-of-programming-content](misc/5.jpeg)

این کتاب توسط یکی از شرکت کننده‌های ICPC نوشته شده و مطالعه‌ی اون مخصوصاً برای دوستانی که C و ++C کار می‌کنن توصیه میشه.

## لینک‌های کمکی

### پیگیری اخبار ICPC

http://blog.icpc.ir/

    البته فعالیت سایت نسبت به گذشته خیلی ضعیف شده.

### سایت دانلود کتاب Library Genesis

https://www.libgen.is/

### دانلود دوره‌های آموزشی از تورنت‌ها

https://www.pirateproxy-bay.com/

https://torrentgalaxy.mx/

<hr>

<!-- # Intro -->
