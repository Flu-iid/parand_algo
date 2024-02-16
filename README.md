# Parand Data Structure and Algorithm Competitive Practice

<!-- [english](#Intro) -->

# مقدمه

این ریپو (Repository) برای ثبت سوال و جواب های قرار شده در تاپیک الگوریتم (DSA: Data Structures & Algorithms) گروه کانون برنامه نویسی پرند درست شده. علاوه بر این ها توضیح مختصر راجب ICPCو مسابقات الگوریتم، منابع موجود و بانک سوالات نیز تعبیه شده. سعی میشه با توجه به منابع روز و مورد نیاز استفاده کننده هاو لیست منابع و محتویات توضیحات نیز به روز بشن.

دوستانی که بار اولشونه از گیتهاب استفاده میکنن و میخوان با گیت و گیتهاب آنشایی پیدا کنن میتونن از لینک های زیر کمک بگیرن

> https://www.theodinproject.com/lessons/foundations-setting-up-git

> https://www.theodinproject.com/lessons/foundations-introduction-to-git

> https://www.theodinproject.com/lessons/foundations-git-basics

<!--
آموزش الگوریتم برنامه نویسی فقط راه حل مسائل نیستند. آنها یک مسیر کارآمد برای تکمیل وظایف، تجزیه و تحلیل مجموعه داده های پیچیده و وارد کردن داده ها ارائه می دهند. آنها هسته برنامه نویسی را تشکیل می دهند که بدون آنها احتمالاً دنیای فناوری محور وجود نخواهد داشت.

اهمیت الگوریتم در مصاحبه برخی حوزه ها -->

## فهرست

- [ توضیح عملکرد ریپو](#توضیح-ریپو-repository)

- [مسابقات](#آی-سی-پی-سی-icpc)

- [منابع](#منابع-آموزشی-و-سوالات)

# توضیح ریپو (Repository)

سوال ها به ترتیب قرارگیری در گروه و ریپو شماره گذاری می شوند.
به طور مثال `01` به معنی فایل اولیه قرار گرقته شده در گروه و ریپو است. در ادامه به بقیه دسته بندی ها میپردازیم

## سختی سوال ها

سختی سوال ها بعد از شماره ی آن در اسم ذکر شده که به ترتیب زیر است:

| پسوند | میزان سختی |
| ----- | ---------- |
| A     | آسان       |
| B     | متوسط      |
| C     | سخت        |

> `01A`

    	حرف A بعد از شماره سوال به معنی آسان بودن سوال است.

## موضوع های سوالات

سوالات الگوریتم موضوع های زیادی دارن و درکل مضوع مهم در اونها طرز فکر و طریقه پیاده سازی هست. بعلاوه که گاهی یک مسئله میتونه به چند روش مختلف حل شه. ولی به طور معمول در ۹ دسته زیر میشه اون هارو طبقه بندی کرد (با اسم الگوریتم ها به مرور زمان آشنا میشین و جای نگرانی نیست. یه سری از اونهارو شایدم استفاده میکنین و فقط اسمشونو نمیدونین):

### لیست موضوعات

#### رشته

الگوریتم های تغییر و پیمایش برروی رشته ها را شامل و رابطه ی نزدیکی با الگوریتم های جستجو دارد. موضوع طریقه پیاده سازیدر این نوع سوال ها پررنگ تر است. مثال الگوریتمها:

> Knuth Morris Pratt(KMP), Z algorithm, Suffix arrays/Suffix trees. These are bit advanced algorithms

#### گراف

این دسته از سوالات ارتباط نزدیکی با نظریه ماتریس ها و ساختمان داده دارند. به ویژه درخت ها و الگوریتم جستجو در آنها. مثال الگوریتمها:

> Breadth first search(BFS), Depth first search(DFS), Strongly connected components(SCC), Dijkstra, Floyd-Warshall, Minimum spanning tree(MST), Topological sort.

#### برنامه نویسی پویا

برنامه نویسی پویا (Dynamic Programming) در کل درنظر دارد تا از محاسبه اضافی جلوگیری کند. اغلب سوالات برنامه نویسی پویا با تکرار و با استفاده از روابط بازگشتی (recursion) قابل حل هستند، ولی اینگونه حل بهینه نبوده و با پیاده سازی های خاص روش های بهینه برای اینکار وجود دارد. مثال الگوریتمها:

> Standard dynamic programming problems such as Rod Cutting, Knapsack, Matrix chain multiplication etc.

##### نظریه اعداد

مجموعه روش های رسیدن به اعداد مورد نظر با توجه تئوری های این حوزه. به جای استفاده از متد brute-force (در نظر گرفتن تمام حالت ها و ادامه تا رسیدن به جواب) و امتحان تمام حالت های مساعد با شرط سوال، از شرط سوال عدد های مد نظر را تولید میکنیم. این مجموعه روش ها ارتباط نزدیکی با برنامه نویسی پویا دارند. مثال الگوریتمها:

> Modular arithmetic, Fermat’s theorem, Chinese remainder theorem(CRT), Euclidian method for GCD, Logarithmic Exponentiation, Sieve of Eratosthenes, Euler’s totient function.

#### حریصانه

الگوریتم های حریصانه (Greedy algorithms) با توجه به اختصاص معیار (heuristic value) در هرمرحله سعی میکند بهترین گزینه برای الگوریتم را انتخاب کند. مثال الگوریتمها:

> Standard problems such as Activity selection.Standard problems such as Activity selection.

#### جستجو

مجموعه الگوریتم های مربوط به جستجو در یک دنباله. مثال الگوریتمها:

> Binary search, Ternary search and Meet in the middle.

#### ساختمان داده

ساختمان های داده پایه حل مسائل الگوریتم هستند و انتخاب نوع داده درست در حل سوال آنچنان موثر هست که معمولا اینگونه سوال ها در دسته بندی مختص ساختمان داده قرار میگیرد. مثال از داده ساختار ها:

> Data structures (Basic): Stacks, Queues, Trees and Heaps.
> Data structures (Advanced): Trie, Segment trees, Fenwick tree or Binary indexed tree(BIT), Disjoint data structures.

##### هندسه

بخشی از سوالات الگوریتم مربوط به مسائل ریاضی و به ویژه هندسه هست. ولی به طور معمول دانش زیادی از ریاضی و هندسه مورد نیاز نیست و از قواعد ساده آن استفاده میشد. مثال:

> Graham-Scan for convex hull, Line sweep.

#### نظریه بازی ها

مجموعه سوالات الگوریتم که با توجه به قواعد و شرط های زیاد برای اجرا در این دسته قرار میگیرند. سوالات مربوط به بازی هایی مثل شطرنج با شرایط خاص در این دسته هستند. مثال ها:

> Basic principles of Nim game, Grundy numbers, Sprague-Grundy theorem.

### نماد ها

| موضوع               | پسوند |
| ------------------- | ----- |
| Graph               | G     |
| string              | S     |
| Search              | R     |
| Number Theory       | N     |
| Dynamic Programming | D     |
| Greedy              | G     |
| Data Structure      | T     |
| Geometry            | M     |
| Game Theory         | A     |

> `01A-M`

    	سوال هندسه ساده

> `04B-GT`

    	سوال ساختمان داده و گراف متوسط

# آی سی پی سی (ICPC)

مسابقات بین‌المللی برنامه‌نویسی دانش‌جویی (ICPC) همه ساله به عنوان یکی از مهم‌ترین و معتبرترین مسابقات برنامه‌نویسی در سطج جهان برگزار می‌گردد. این مسابقات تا سال ۲۰۱۸ از سوی انجمن ماشین‌های محاسباتی و با پشتیبانی شرکت‌های بزرگی چون IBM برگزار می‌شد و با نام ACM-ICPC خوانده می‌شد. این مسابقات در ایران به اختصار به مسابقات ای‌سی‌ام معروف است. تیم‌های شرکت‌کننده در این مسابقات، دانشجویان دانشگاه‌های سرتاسر جهان هستند که ابتدا در مسابقات منطقه‌ای شرکت می‌کنند و سپس تیم‌های برگزیده جواز حضور در فینال را کسب می‌نمایند. مسابقه فینال معمولاً در اوایل بهار هر سال برگزار می‌شود. مسابقات منطقه‌ای غرب آسیا از سال ۱۳۷۸ تا کنون (به جز سال ۱۳۹۰) در دانشگاه صنعتی شریف برگزار شده‌است. مسابقه منطقه‌ای غرب آسیا عموماً در اواخر پاییز هر سال برگزار می‌شود.

> ویدئو یوتیوب کامل برگزاری مسابقات فینال ICPC 2022 Dhaka [اینجا](https://www.youtube.com/watch?v=15Wyj_-PG9I)

در چنین مسابقاتی علاوه بر تسلط بر یکی از زبان‌های برنامه‌نویسی C,CPP, JAVA, KOTLIN, PYTHON(البته تضمین می‌شود تمام سؤال‌ها به وسیله C/CPP/JAVA قابل حل باشند) مباحثی نظیر طراحی الگوریتم و ساختمان داده‌ها بسیار تأثیرگذار هستند.

مسابقات بین‌المللی برنامه‌نویسی دانش‌جویی یک مسابقهٔ تیمی می‌باشد. قوانین موجود بیان می‌کنند که هر تیم باید شامل ۳ نفر باشد. شرکت‌کنندگان باید در دانشگاه مشغول به تحصیل باشند و کمتر از ۴ سال سابقهٔ حضور در دانشگاه داشته باشند. دانشجویانی که دو بار در مرحلهٔ جهانی حضور داشته‌اند نیز نمی‌توانند در مسابقه شرکت کنند. مدت مسابقه مغمولا ۵ ساعت (بسته به سختی و تعداد سوال میتواند تغییر کند) و تعداد سؤالاتی معمولاً بین ۸ تا ۱۲ سؤال است. تیم‌ها که تنها یک رایانه در اختیار دارند، باید جواب‌های خود را در قالب کد به سیستم داوری خودکار ارسال کنند. سپس برنامه‌های ارسالی توسط داده‌ها مورد آزمایش قرار می‌گیرند. اگر برنامه‌ای نتواند در مقابل تمام داده‌ها پاسخ درستی بدهد مورد قبول قرار نمی‌گیرد و تیم با احتساب جریمه می‌تواند برنامه دیگری ارسال کند.

> ‌ برندگان گذشته مسابقات و اطلاعات رقابت آن سال [اینجا](https://icpc.global/community/world-finals-champions)

تیمی برنده است که بیشترین تعداد سؤال‌ها را به درستی حل کند. اگر رتبه‌بندی تیم‌ها برای دریافت مدال و جوایز ضروری باشد، رتبه تیم با توجه به زمان سپری شده در هر مرحله برای ارسال پاسخ درست به علاوهٔ بیست دقیقه برای هر پاسخ نادرست که قبل از هر سؤال حل شده ارسال شده، تعریف می‌شود.

به عنوان مثال شرایطی را برای دو تیم آبی و قرمز در نظر می‌گیریم. این دو تیم از نظر تعداد سؤالات حل شده با یک دیگر برابر هستند. تیم قرمز پاسخ‌های خود را برای سؤالات A و B به ترتیب در ۰۱:۰۰ و ۰۲:۴۵ پس از آغاز مسابقه ارسال کرده‌است. همچنین تیم قرمز یک پاسخ غلط برای سؤال C ارسال کرده‌است اما چون نتوانستند سؤال C را حل کنند این پاسخ غلط در نظر گرفته نمی‌شود. تیم آبی پاسخ‌های خود را برای سؤالات A و C در ۰۱:۲۰ و ۰۲:۰۰ پس از آغاز مسابقه ارسال کرده‌است. همچنین تیم آبی یک ارسال غلط برای سؤال C داشته‌است.نتیجه به این صورت ارزیابی می‌شود که تیم قرمز در مجموع ۰۱:۰۰+۰۲:۴۵=۳:۴۵ و تیم آبی در مجموع ۰۱:۲۰+۰۲:۰۰+۰۰:۲۰=۰۳:۴۰ زمان برای سؤالات صرف کرده‌اند. در نتیجه تیم آبی برنده است. (برگرفته از ویکیپدیا و ICPC.global)

مسابقه‌ی منطقه‌ای تهران هر سال با شرکت ۸۰ تیم از دانشگاه‌های سراسر کشور برگزار می‌گردد. هرساله این مسابقات در پاییز در دانشگاه شریف برگزار می‌شود.برای شرکت تاریخ آن را با [سایت](https://ssc.ce.sharif.edu/pages/forms/%D8%AB%D8%A8%D8%AA-%D9%86%D8%A7%D9%85-%D8%AF%D8%B1-%D9%85%D8%B3%D8%A7%D8%A8%D9%82%D9%87-%D8%A7%D9%86%D8%AA%D8%AE%D8%A7%D8%A8%DB%8C-acm-icpc-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81/) مربوطه چک کنید. پس از پایان مهلت ثبت‌نام، نحوه‌ی انتخاب تیم‌ها از طریق ایمیل به شما اطلاع رسانی می‌شود.

> قوانین مسابقات ICPC منطقه ای [اینجا](https://icpc.global/regionals/rules)

> قوانین مسابقات ICPC فینال [اینجا](https://icpc.global/worldfinals/rules)

# منابع آموزشی و سوالات

برای دانلود کتاب آموزشی میتونین از سایت libgenesis استفاده کنین.

<a href="https://www.libgen.is/"><p style="text-align: center">Library Genesis</p></a>

منابع آموزشی انگلیسی مربوط، خیلی زیاد هستن. از منابع معروف که برای شروع مناسب هستن به صورت زیر طبقه بندی شدن.

## سایت های رقابت و بانک سوالات

تعداد سایت های برگزار کننده مسابقات آنلاین بسیار زیاد است ولی سایت های معروف و آن هایی که مناسب دیده شده را اینجا ذکر کردیم:

- [Codeforces](https://codeforces.com/)

  > سایت معروف و قدیمی مربوط به مسابقات الگوریتم که کامیونیتی بسیاز بزرگی دارد
  >
  > تعداد زیادی سوال در موضوعات مختلف در بایگانی دارد و مسابقات آن به صورت مداوم تشکیل میشود
  >
  > توصیه میشود حتما ثبت نام کرده و به آن برای حل سوال سر بزنید.

- [Codechef](https://www.codechef.com/)

  > از سایت های محبوب حل سوال الگوریتم که بانک سوال قابل توجهی دارد و مسابقه آن به صورت مداوم و هفتگی چهارشنبه ها برگزار میشود.
  >
  > توصیه میشود مسابقات آن هفتگی شرکت شود و برای رقابت بیشتر میتوانید نام دانشگاه خود را نیز وارد کرده تا وضعیت حل سوال هم دانشگاهیی های خود را نیز ببینید.

- [Quera (کوئرا فارسی)](https://quera.org/)

  > سایت کوئرا کار خودش رو در تابستان ۹۴ با یک تیم سه‌نفره از دانشجوهای شریف شروع کرد. که بعد ها به سایت جامعه ای برای برنامه نویسان تبدیل شد.
  >
  > این سایت علاوه بر بانک سوالات و مسابقات داخلی، دوره های آموزشی داشته و با تکمیل پروفایل میتونین برای شرکت ها رزومه بفرستین. وضعیت حل سوالات الگوریتم و رتبه مسابقات هم میتونه در قسمت رزومه از طرف کوئرا قرار بگیره.

- [Topcoder](https://www.topcoder.com/)
  > از سایت های قدیمی بوده که دوره های آموزشی مناسبی داشته و بانک سوالات نسبتا خوبی داره
  >
  > این سایت برای دسترسی کاربران ایرانی گاهی میتونه مشک باشه

## سایت های آموزشی

- [Geeks for Geeks](https://www.geeksforgeeks.org/)

> سایت هندی بسایر معروف بین برنامه نویسان.
> سه بخش جالب توجه برای مسابقات الگوریتم لینک های زیر هستن:
>
> - [How to prepare for ACM – ICPC?](https://www.geeksforgeeks.org/how-to-prepare-for-acm-icpc/)
> - [Competitive Programming – A Complete Guide](https://www.geeksforgeeks.org/competitive-programming-a-complete-guide/)
> - [Complete Roadmap To Learn DSA From Scratch](https://www.geeksforgeeks.org/complete-roadmap-to-learn-dsa-from-scratch/)

- [CodeChef](https://www.codechef.com/)
  > کدشف سایت هندی آموزشی ،بانک سوال و برگزار کتتده مسابقات هفتگی دردسته های مختلف است. که از دارود (Judge) SPOJ استفاده میکند.
  >
  > سایت بسیار مفیدی است و توصیه به شرکت در رقابت های آن میشود.
  > آموزش های رقابتی آن به زبان های برنامه نویسی مختلف وجود دارد
- [TopCoder](https://www.topcoder.com/)

  > از سایت های قدیمی برگزاری رقابت هال الگوریتمی و دوره های مربوط به آن برای مسابقات و مصاحبه های کاری است

- Other Sources
  > - https://github.com/jwasham/coding-interview-university
  > - https://cp-algorithms.com
  > - https://silly-servant-943.notion.site/Data-Structures-and-Algos-da138a46aab3466f9f0b196f16375bc0
  > - https://roadmap.sh/computer-science

## کتب آموزشی

برای دانلود کتاب مورد نظر میتونین از سایت [libgensis](https://www.libgen.is/) استفاده کنین

کتاب های متنوعی در این زمینه وجود دارد ولی ۴ کتاب معروف که پرطرفدار هستند به صورت زیر است:

### 1 Programming Challenges

![Programming Challenges
The Programming Contest Training Manual
By Steven S. Skiena, Miguel A. Revilla · 2003](data:image/jpeg;base64,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)
کتاب مناسبی برای شروع. همراه با تمرین ها

### 2 Introduction to Algorithms(CLRS)

![Introduction To Algorithms
By Thomas H Cormen, Charles E Leiserson, Ronald L Rivest, Clifford Stein · 2001](data:image/jpeg;base64,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)
بهترین کتاب برای یادگیری الگوریتم ولی متن آسانی برای شروع ندارد. معمولا توصیه میشود قبل از شروع این کتاب کتاب های دیگر در این زمینه ها مطالعه کرده باشید.

### 3 Algorithms unlocked

![Algorithms Unlocked
By Thomas H. Cormen · 2013](data:image/jpg;base64,/9j/4AAQSkZJRgABAQEAEwATAAD/2wBDAAMCAgMCAgMDAwMEAwMEBQgFBQQEBQoHBwYIDAoMDAsKCwsNDhIQDQ4RDgsLEBYQERMUFRUVDA8XGBYUGBIUFRT/2wBDAQMEBAUEBQkFBQkUDQsNFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBT/wAARCACWAGMDAREAAhEBAxEB/8QAHwAAAQUBAQEBAQEAAAAAAAAAAAECAwQFBgcICQoL/8QAtRAAAgEDAwIEAwUFBAQAAAF9AQIDAAQRBRIhMUEGE1FhByJxFDKBkaEII0KxwRVS0fAkM2JyggkKFhcYGRolJicoKSo0NTY3ODk6Q0RFRkdISUpTVFVWV1hZWmNkZWZnaGlqc3R1dnd4eXqDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uHi4+Tl5ufo6erx8vP09fb3+Pn6/8QAHwEAAwEBAQEBAQEBAQAAAAAAAAECAwQFBgcICQoL/8QAtREAAgECBAQDBAcFBAQAAQJ3AAECAxEEBSExBhJBUQdhcRMiMoEIFEKRobHBCSMzUvAVYnLRChYkNOEl8RcYGRomJygpKjU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6goOEhYaHiImKkpOUlZaXmJmaoqOkpaanqKmqsrO0tba3uLm6wsPExcbHyMnK0tPU1dbX2Nna4uPk5ebn6Onq8vP09fb3+Pn6/9oADAMBAAIRAxEAPwD4r8QaOI5PtcQHkSnDKP4G/wDr1+rYqgoP2sNpHjYSu5L2U/iX4mXbxmGQenauFe6zub5lqackIZ9w6SjP0Yf/AFq6ZR+0jFPoy4kJubbB5Z1IJHqO9bqPNEwcrSIdGjMd+FP3XUg/lSwq5atmPEu9O5bkgKzxEj/loK15LTXqY894y9Cu8J/egA8yH/0KsXHc3jL4S/4ehWM3U7dE3H8l4/pXZhIcqnN9LnDjZX5Ka3bX5kVtGYLeS4bkpHnH+03P8sVFOPJF1H0X5mlV884011f5GKYSN7nnHA+teZa+rPSvdlNodxC8knr71ly3LUrEd1CSRCnBPLGhroi47XZIunqihTIqEfw+lPlQuZ9Do9EvkuoWsrn51K457j/EV62FqxmnRqbHj4qlKL9rS3KV9pL2c7RHkjlW/vL2rkq0HSlys7KVaNWCkmWLNPOiaM4yDuU/7VXTXMmmTOVnct2SckAcfeH9a66UejOWtLqhgtzBfqw6B/0qVHkrJ+ZXNz0WvI0JoP3g9nBrunTtL5r8zhp1OaF/JlZ7fBfj+Mn9T/jXNKGsvVnTGppH0RatoTFo0+ODKQn4Fsn9BW8IWw8l3OWc+bFR/ula+Xy7NVx99t5HsOBWNZctNRXU6KD56rn20MmaDAVSO2T9a86UT0oyuQmIRqXxhjwKz5eVXZfNrYjitvKXcfmkYnAPrUqNtxuXQrsYgxDnc3c1DaNFcvrCUcSR5Vgc8Vty2d0ZOV9Gb8Kpq1mEY4nT7vufSvZVsVTs/iR4c74WpzL4WU47dopR2wcH2NccYSjI73NTjdMvrGBIGAwOv+Nd8Ya3RwSmrco64t9wDgelXVp6qS6GNGte8WXJ4CWRscHa1dco319DghPlvH1/Egmg2NIMYwxrFw38zrhVWiLc1o0dhZx/xSsXA9Oij9c1bguWMexzKquec31M+/QPctjBVDgfhXLVheV+x34eXLTt3KDWxeQk9zkmuB023qeiqqS0K7W/muWPCrwBWfJzO5rz2VupBPGXLKMLxhmH8I9Kxmrm0X3Kv7pOAgOPasbLoa3fU0YBknI+bvXTDexzTfUuwRtA6yR59xXbBOnJSRw1WqsXBmpNbi8gNwg5HEgHUe9ejOmqiUkeVCrKk/ZzEt4vMyuMsOQKuEbKxFSraV0Xk07z7ViBkritdGrM5uZqXMi9FppuNLgkAOQCp/A0XtoTvqRX+kuJpQFHzSsB+YqtwvI0tS0/ybx2K/urOEAe7Yz/AOhMKhMT0OVkh2qARyfaplC5106tmrkEkH8OOvU+lc0qXQ7I1U9SCaLACqOe2e3vXPUhbRHVCp9plGW3DblU7YwfmbvmuFwv6HbGSXqVv3faEsPXPWsvdWyNvffUvxQZO11ww711Rj0ZzTn/ACl+FcDB/OvQpx6M82pK2qNLTXNrcB9u+M8Mp7g12KNjyqk+d6mvLof2O5SSI7rd/mjOO3ofpTuZ6vY6DTdKUuVCjZIOOPWocrDbsaGm6GRp1zHsJ8uQ9ugP/wCqs3LW4n5Fj/hHTNqaR+Xkmc9vQ5o51uFyrrmmbopOMefKW6dVH+f0pxkNK5yN5pZVmcrgA4AA61smFmtjJurJouCPnPX2p2uhxbTsyhLEMHPTpkVzzhc9GnVuyjcRFhz90dFFedUjd+R6VOSjvuVfJH09sVy8iOvmNCGJgvUPH29RXo04NeaPNqST8mXYIi44+YenevQhGyPLqTuzc0203MuRlT+nsarY5UuZ6naaHp6NGLOU/uZPuOf4G9655y6lM6zw/wCE55rg2/lnzYzuAx29KwnPS6M3JHrHh74QXF1PdbYCY54VYfKev+TXm1MVGPUFCUtkbM/wVurW8kuPIIIR2XAPDHIH86z+uQkrXK9lNbo8q8b+CZ7C5MaxbVjURrx+Zr0aVRSV7malZ2Z57faT5eWZeBwB/WutSNEzltT04KGY9D+bVupFNHM3cBVskAEdBVNXHTk47FKSHOc9K5Z079bHowrLbcrmGLPUVyctI7VOdti1FCucglK7acEvhPPrTe0tTVsrUuyl0IH99K6NjznqzrNMseAx5z/EoyPxHasmy9kd14Z0Y3MqJt3I3p/MGuWcrakO59RfCf4Z/wBqm0klTMsWAshH3196+dxmL9lexvQoe0Z9WeGfh3YaVZxb4xuA+6OwPrXwlfHVJt2PrqGApwSctzWuvCOnXcLJ5IXd361zRxVSOx0ywlKXQ8A+MXwiijWWVIxyM59q+vy/H86SPlsbgnSldHyL408JtZXEmY8Y6KB0r7CnUujyYJ9TzTVdFch2259WPQV2KaOhI4vVrNIGYqPMYd+grpjIxkmjm7gZc5wx9KmeqOmjo7FQjnpXmPfY9dbbluFBn+JfcCvTppbpHk1m76nTaHFhwwYD8MGqkc0DvdC04SurGM5PAZOPzrjmze1z2z4ceERLPGSAwzkjpn6j19xXlV61kPkufY3wg0qG0WBQuMY/lXxGYzbTZ7uBglJHsYOa+YPpBaYHKfEK1juNFO8DjI5r0cDLlqM87HR5qdz47+IukWcbyOdpbJwCeK/QKE3bQ+Rsk2eA+K7TzWcKu4DOOMAfSvYptl2TR5fr+nk7t5H4nNejCRhNcxxl3bCMkcn6CtWk0ZxbT0KXlr6CuVxV9j0VUnb4i1apGWGQfwFdUV2POqSZ2Wh2sTFcbxz6VlNsuCR6r4O0lJ7iJA75OD93PpXm1Z2R1KJ714AuLGFZ/LNw722qLpL5h/5asoIK+q9Rn1Vh2r5yvW5nY6VSa1PbPCXxAttJ8VSaSLS9ljs7gWl1qESI0FvP9nFz5bDd5n+qZG3BCo8xBnJOPCxEfaJpHZRvFpnexfG6yfQ5dQfQNVt3BsWhtZ2tkeeO7k2QSK3nbFBIbIZlI2njpn572Lva/f8AA+hjUTVypqH7Q2i2XhnxLrKaPq10vh3RU13ULaIQeYluZLyNwpMux2U2E/3WKsNhRmDZpqi3JRfV2/L/ADHzaNmd8SPihp8N0dIvIZ7DUU/stHs5GiMge/ujbRAbXIba4JbaTgcjNehg48nvs8rGSc3yI+c/EPjTwzq9rZzB7wNeTanD5Jtj5kRsVkaYuO25Y8oBkuGUgYyR9TSxFjw5YV7nl3ifQ2nshdfZzbBydqPNHKW4zkGNmU/nXt0a3ORKmonkviPTCpbBH4CvWpyMJKx51qtk0ch+Yn6Cu1O6ORvlZkmEg1DidEajSJrRvmGBn2q4u5zzW522hTAbcAZ9OprGZtHY9Z8D6nLa3cUix7cY7AV5laN0dMZ8rPV/C+kaD4Y0nzjqesaRPbaW+q3F7CwuZJI7Fw7zssiOhcNcsSFXB81vlzjHzVenGDOyNWU1seqeHtM8J6n4/wDKm13UdR1iHWVgvNOlhREn1H+zGInfbEpGbWIjKMsRMIGN6kV5VW1mdMeZHoemaH4N0nwDoN7q2qa14k0/X308aZDcWYuppo7dHubaBYYoQWURpK7blLEBiWyBXgVXJ1LRsrX/ABPbor3LsraN4a+G2uaFeeFtI1LWtS0nxT4QsvDqXVpDJLbw6Y0V21ptnERRHMV3JgyEnaIiwycvPPUVpu107/PT/I2snoc/8Q73wT4h1TVvEr3F1fzwzaKZZbO2aR4JYL4SWkS4QkO8si7kHOxlOAGBPsYde6oM8OspKbseZ67a+FvDF3aSJb63pWqRk6g929nJ5qB/tNtG0/yMqDFxNtBA6KW6c+tTSdjik5nlHionQ1vYVup7qW4nM081wkSl22qv3Y1VBwo+6Bnr1NfRYely6o45Vebc8m8QarI7NlYn+qAfyr1qcehhKVzgNVvo3YhrZOepVmFdkVY5XqzFM0ROQjgem6nc0sxtrgOMrn6mlGwVW7u52ehSsVAQAew4qJDjLQ9J8K36WskbySBgDyScD/69cNSLaNVI9o01rbxnZrZteT2Ecmm3ekzmFUJmtbny/OT5gdpxEuG68npwa8DE4fW7OmGI5fdPcfDHgjTL7xzo/idru6XU7DVbjU8IVCyiaze2MLjHKqG3jvu4zgkH5/EQsnE76dW56fpnwgu7Xwr4U07/AISq9Nx4akil0q8FnCGiC2ktrtdcFXzHM/Xvg+x+YnNc7938T6OC91FzwX8JI/h8dItNA13ULPRNPsbOxfTpI4pBcrbQeRGWkZdwJRY923GdgIxk5hzve6L5Tyvx18DvD3h3w7qugWDvZ2GpG3nvYTBHLFdXEV0LlZ5UYEO7Y8tyc7kVQc7Rj3sHet77PDxc/ZzseZeLtFgNiyR6m0Np9hi0+5s7OzhhjkhjleRVVQuIx85U7R0r36VG7SPMeIW54z49v4r+5nmgcMWJYqa+joxaS0ORvmdzxzXLpdzh1Kn2r1IIwfU4fUXDucNuFdK2Ofrcy+RWLWp2xtYntioc5+b0UdK0jY56qk3sdFp+pAbVGHYfwLwo+tJq5EWtjrtJvCHTe25vboK55ou5634E8Q/ZZY/mGf5159anzIXNY+n/AITa+NX1GONWDbSFJ9WPavl8dT9nCT8j0MLPnnGJ9TooVQB0HFfBdT7ZDqBnkfx4m+wWsNzjgod3vj/9dfR5R794nzuae61I+O/Hfil7adnhk+U9OeCK+6o0tNT5tSuzyDxDqo1AvNCfLm6sgPB+lejCNtGaN6aHnmsagsxZZBtbua7YIzlJLc5G9BDHDcVo9iKdr2ZS80iuNzkemqatoJDI0nIyin8zVU5OW2xFWmo3b1ZqafciIhVAHqa61qjzpJ3Ot0i7IA56d/WsZIpanZaXrLWe0p/rCQqgVzyjcW59H/ALxlHoF5DdzgyxWLKzruA8x+CRk/gK8HMMO60XCPVGmGq+xqKb6M+nx+0dpG2I/wBnzDzGKrmVe3U9K+NWS1esvwZ9L/bFPpB/gPj/AGiNKkHy2Ep4z/rR7+3tSeTVF9v8GH9rw/k/FHmvxn+MNh4v0qK0gtntnjVjl5AdxP09MV6+W5dUwsnKTvc8vHY6GJUVBHxnr2um4mntZDyGYpnsM9K+1hC2x5KR53q160DsQSprsijS+hzep3iagDk7Zh+TVqlYyck3qc7PKyEhvXpWc5ciO2lTU1dEHnIec1ze1idipyI4pAxwDwO9ZU5t2S2NqkLbl+3fkZPFelB6HkVItM39MvShG47R6+gptX2OdO2h0OkamHke7I+WP5Y19TWMl0K32PT9P8SvoWlQWyuRJkliD1PU/rxXFKHM7mb1Ny+8byWuqadbhxiC2Vnx/eYZP6ms1TVm7E8tx+j/ABAlBj3SkfLg8992P61MqK3sKzjsZfijxnL9pUrIQgJUgHqDyK1hS0sOKPOvFF+WlM6n73OfQ1101pY2Rymq36XtsZVxnuPQ1ulYTehylxKwY9sd6Jy5TenDm3IGmWf5XOHxxXM5xqPlZ2Rpype9HVFJrd9x4rglTknY9KM4NJ3GwPleOFH5k0oP7h1FZ36l+Jsn6dq9KEro82rC6uWBcEYiU8k8n1rfm2icHsrpyZ1nhybffwxKSYbRRK49ZDwo/OlPqY9NTov7TN/q0FqpBy6xD3yef61k48sWxWQ+7177V4i1CXd8ofaPYBuP0FCj7qHy3QzTNYYpndgiFm/75IY/ypyiPlH69qRljZg3LLkf5/ClCOpK3OcutTW9smXPbj2P+f51slYd7HL/AG0xSMD0bII96bdjSNPnWhSuecmuetqjsw2m5kzTbcjkfSvHnKzse5CC+IaNUlQAdcULETS3E8NCTuLDJg5zxRBlzRc88RRlz17V2KooRuzidPnlYmtJNqNO3YcCtqEvddSRzYiN3GlE6bS7sabpu48Syfv3P14T+prrXvK7PLqWU3GPoW/B15u1lrp+VtYZblvYhcD9SKc7ONjOzRlWGpuZJJCcl3yT68E/1q9BtNWLmh6iz3FrGT99JE/76QipaJaaLV7qfm2ETA54x+g/+vTSs7hc51LtkdgTkbu9HMr2NXBuJTvGwSfWuWvJrY78MrogjuPOUofvD9awhV54uLOqdL2crrY6z4T/AAY1z42+L10fSNlrawp5+oapccQWNuDzI57n0XqT6DJHiY2vHDx5nu9l3PVoLnVj9FvBX7Jnw30rwtp1onhTTdSWGPaL3VrATXNxyf3jtuHLdduBtBC44r4erj6rm/efyeh6ipxsflVAwy2SNoOT7mvv4d+h5cosk02E6/rlpZLcQ2izSCNZp95RWPTOxWbrgcA9aidRyd+iKjD2cb9TrB4I1aW78q3hF9YQPMJb22VxDmHG8ZYLgnIxnGfxrvVanKcKR5kouEJVer0Rp654R1a2+3qj2l4LSI3E32WUsFCzCBlGQMlXOOMjHIJGDXdLFUnZ7Jv8LXPMo4ZuV+35lm38J6to+l+IhLHCk8d9b6KSJRgTP85Ge4HAJHTI9RWNPE06kVLur/cXUoS5kkYSeH72LxLBoCbZ9QmuEhRVV0Bd8BRh1VhywHT9KqlXUqftH5/gaVqPv27W/EQWN54fv9HF9A9rJL5c6xyqVbYWwCQQCM4Na06qqQUkZ1aDjKSNmXwheJPcWZ1HTCLdxC0izMVWYuyCEjbnduVhnG3gHdgg1axMZQ5rb/1+pxuhJT3/AK/q5G3wz155tKCRwPLqJVYocujbmiaZFyyhXJVG+4zYOAcE4rzquNpxk5dF+jsexSoNw5SgPBGqXWky3kzQ2sMenxajllklPlvu2ZESPtyFzlsDBBJFVWxEJXitdfIulSdKd2dN8K/2ZfHPxU8VW2n6XaRRWjJHLNqZbdBFG67ixI645UjrkEda8KtjqeH99/d3PWjR548rP0G+F/wo0Twulr8PvCkW/R9PlW41vU8fvNSuxghWbuq8Hb0HHHWvlsXipzvXqfFLZdkdtOmoLlifUtnoNrbWsUXlg7FxXzp0H889/fCJBDH97tiv1Cc7LliedCF3dl3QpTpqrfcCSJlkQsP4gcj+Vb0LQg5y2MK7c5KCOk0XXtQFnJcGbbNcPOVITGFl/wBYfx/Su/BUk4qpJayenojzMbUftFCPwx39ehp3PxM1tNebULW5i066KspktIwmMyGRjjoCWLE9ucAVhUhTk0mrpdP68jajCap3e73L+r+OtWt/hzYaa8sL2+os9xPbtAu1z5iEM3fOIYufRQOlaShGFJVHu/Pprp+JnBueJa7HOx+Krx73TdRTybeTT0D2qQpiOII+8cEk43Enkk/yE0lGNLl30ZtUi3P5lSTVZbnT7OOXYxtgsaP0baCTye/J9KqlJU4RsKdNyk79jqbjxvfNql/N9m08NLN5jhbYANKGZ1lPcuCzHk4wQMYrsjTgrxu9Hbc8ySbUZ23Rjal411crDL9pXzrVkeKQJzGRD5OQeMEqFzjqUB7VwV4Q5dPX79T1aDbOi8A/FfT4PHFvqHj2zHiTRLsrFfQCMBygZmUoBgcF2+XgYAAxxjgqq1K1F8suh0pWleS0P05vPiV4dtvhjoK/Dr7HLBr8WNPeyXamOjMR1BXB3BvmBGDg18XGnJ1JTxH2dz07q3unrXwg8CxeEPDVuCC1xIN7yP8AedjyzH3Jryq9V1puTNUrI9ArnGfzc2sjXl8d7EZOOO1foq96Rzt8qZv6k5P2W1X5UYgsR3ruqPSNNbHJTXxTe500+LcFFA2wRhVFe7L3FaP2VoeBBe0fNL7T1+Rgu7SebzhiMZ/GvFu2e6kr2Oh8eyGKPS4E+WOGzjVR6+9dWLdoRijz8CrynN73MOGQi3AHQwkVjFvl+R1yV5fMYkpNoBn+6alSfIXa0zZlkP2yVuzhJAPTKivS5nzvzs/wPLUF7NLs2vxKN5nDg9+K5a2t0ddFWSZlQOWXYexx+XIrgjI7pRTP1c/Y0+AbeAvBWj2upan/AGpPM51EJyYrYyqpMcWRkLhQT6sSe9fC4/Fe1qOMVZHZThyx1PslECKFUYAGAK8g2HUAf//Z)
کتاب ساده شده از کتاب قبلی (Introduction to Algorithms(CLRS)). همراه با توضیح ساده و مناسب برای شروع.

### 4 Competitive Programming

![](https://books.google.com.hk/books/content?id=CBnDzQEACAAJ&printsec=frontcover&img=1&zoom=1&imgtk=AFLRE71Q78TTqFJEnvxgyBrHMYs8EYmpZ6931NjVBs3I43NeRIMpAdSKWbZXawPa-cJlsxoTMgaG4zQQoVRSXheUz3C2MHeBuyQKeWd6TrDl6JMM3tgzjXEyD_ep0txxCrMV5JDYcyFR)
این کتاب مختص مسابقات بوده و به سبک ICPC نزدیک تر است.

### نکته

> توصیه میشود برای شروع از کتاب های ۱ و ۳ (Algorithms unlocked و Programming Challenges) شروع کرده و بعدا سراغ کتاب ۲ و ۴ (Introduction to Algorithms و Competitive Programming)رفته.

### Art of Programming Contest

این کتاب توسط یکی از شرکت کننده های ICPC نوشته شده و مطالعه اون مخصوصا برای دوستانی که C/CPP کار میکنن توصیه میشه.

## لینک های کمکی

### پیگیری اخبار ICPC

http://blog.icpc.ir/

    البته فعالیت سایت نسبت به گذشته خیلی ضعیف شده

### سایت دانلود کتاب Library Genesis

https://www.libgen.is/

### دانلود دوره های آموزشی از تورنت ها

https://www.pirateproxy-bay.com/

https://torrentgalaxy.mx/

<hr>

<!-- # Intro -->
