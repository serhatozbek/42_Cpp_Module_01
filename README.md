## 🤖 C++ Module 01 | Ecole 42

Bu repository, 42 müfredatının C++ serisinde bellek ömrü (stack/heap), <b>referans</b> ve <b>pointer</b> semantiği, dosya akışları ve seviye bazlı loglama gibi konuları ele alan Module 01’i içerir. Proje, her biri tek bir kavramı pekiştirmeye odaklı küçük ve bağımsız egzersizlerden oluşur.

---

### 🚀 Projenin Amacı ve Hedefleri

Bu modülün temel amacı, C++’ta nesne ömrünü ve sahipliği anlamak, referans–pointer farkını pratikte görmek, dosya üzerinde string değiştirme ve seviye tabanlı çıktı üretimi gibi akışları uygulamaktır. Modülün sonunda hedeflenen yetkinlikler şunlardır:

<b>Stack vs Heap</b>: Nesne yaşam döngüsü, oluşturma ve imha (delete) sorumluluğu.

<b>Referans & Pointer</b>: Adresleme, aliasing, mutasyonun etkileri ve kullanım bağlamları.

<b>Dosya Akışları</b>: <i>ifstream</i>/<i>ofstream</i> ile okuma-yazma, “sed” benzeri string değiştirme.

<b>Kontrol Akışı</b>: Seviye bazlı log üretimi ve basit filtre mantığı (switch/fallthrough).

---

### 🛠️ Egzersizlerin Detayları

**Modül şu içeriklerden oluşur**:

<b>ex00: BraiiiiiiinnnzzzZ</b>

+ Stack ve heap’te nesne oluşturma; ömür, destructor ve doğru <i>delete</i> kullanımı.

+ Üye fonksiyonlarıyla yaşam döngüsünü gözlemleme.

<b>ex01: Moar brainz!</b>

+ Nesne dizileri (array) ile birden fazla nesnenin toplu oluşturulması ve imhası.

+ Tekrarlı oluşturma/yıkım düzeniyle bellek disiplininin pekiştirilmesi.

<b>ex02: HI THIS IS BRAIN</b>

+ Pointer vs reference: adresler, değerler, aliasing çıktılarının karşılaştırılması.

<b>ex03: Unnecessary violence</b>

+ İki aktör ve bir <i>Weapon</i> sınıfı ile referans/pointer tutmanın davranış farkları.

+ <i>setType</i> gibi mutasyonların referans tuttuğu nesneye anlık yansıması.

<b>ex04: Sed is for losers</b>

+ Program: <i>filename</i>, <i>s1</i>, <i>s2</i> alır; dosyada s1’i s2 ile değiştirip <i><filename>.replace</i> üretir.

+ Satır okuma, arama/değiştirme döngüsü ve dosya hatalarının yönetimi.

<b>ex05: Harl </b>

+ DEBUG/INFO/WARNING/ERROR seviyelerinde farklı mesajlar üreten bir sınıf.

<b>ex06: Harl-filter</b>

+ Girilen seviyeye göre o seviye ve üstü mesajları yazdıran basit filtre (switch + fallthrough).

---

### ⚙️ Nasıl Derlenir ve Kullanılır?

Her egzersizin kendi <i>Makefile</i>’ı vardır. İlgili klasörde hedefleri kullanabilirsin.

```bash
# Repoyu klonla
git clone https://github.com/serhatozbek/42_Cpp_Module__01.git

# Klasöre git
cd 42_Cpp_Module__01

# Derlemek istediğin egzersiz klasörüne git
cd ex00  # veya ex01, ex02, ...

# Egzersizi derle
make
```

---

### ⚠️ Sorumluluk Reddi

Bu repository’deki çözümler tamamen eğitim ve portföy amaçlıdır. 42’nin onur kuralları gereği, Common Core sürecindeki öğrencilerin çözümleri birebir kopyalaması kesinlikle yasaktır. Buradaki kodlar, bu modülü tamamlamış biri olarak gelişimi göstermek ve gelecekteki projeler için bir referans noktası oluşturmak amacıyla paylaşılmıştır.

---
