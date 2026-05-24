# 🎓 Çukurova Üniversitesi Bilgisayar Mühendisliği Sınav ve Ders Kaynakları

Bu depo, Çukurova Üniversitesi Bilgisayar Mühendisliği (CENG) derslerine ait **sınav soruları, ders notları, sunumlar ve ders video kayıtlarını** içeren topluluk odaklı, açık kaynaklı bir arşivdir. Herkesin kaynak eklemesine ve erişmesine açık olacak şekilde tasarlanmıştır.

> [!IMPORTANT]
> Depomuzun temiz ve hafif kalması (GitHub limitlerine takılmaması) için ders videoları ve 10MB üzerindeki büyük PDF kitapları **DVC (Data Version Control)** ile yönetilmektedir. Bu büyük dosyaların asılları güvenli bir **Google Drive** klasöründe barındırılırken, depoda sadece hafif `.dvc` işaretçi dosyaları bulunmaktadır.

> [!TIP]
> **🤖 Yapay Zeka (AI) Destekli Düzenleme Hikayesi**
> Bu arşiv başlangıçta oldukça dağınık, düzensiz ve kategorize edilmemiş ham kaynaklardan oluşuyordu. Tüm bu klasör yapısının sıfırdan inşa edilmesi, yüzlerce dosyanın ders bazlı sınıflandırılması, video dosyalarının yüksek verimle sıkıştırılması ve DVC mimarisinin kurulması; **Antigravity** yapay zeka kodlama asistanı ve **Gemini 3.5 Flash** modelinin üstün agentic (eylem alabilen) yetenekleri kullanılarak gerçekleştirilmiştir.

---

## 📂 Depo Yapısı (Course-First Hierarchy)

Depomuz ders odaklı hiyerarşik bir düzene sahiptir. Her ders klasörünün altında o dersle ilgili tüm kaynakları bulabilirsiniz:

```text
cucengsinav-kaynaklar/
├── Algorithms/                # Algorithms
│   ├── Ders_Notları/
│   ├── Sınav_Soruları/
│   └── Ders_Kayitlari/        # DVC tracked files (.dvc)
├── Operating_Systems/         # Operating Systems
├── Database/                  # Database Management Systems
├── Circuit_Theory/            # Circuit Theory
└── ...
```

---

## 🚀 Başlangıç ve Kaynakları İndirme (DVC Kullanımı)

Büyük dosyaları (video kayıtları ve kalın ders kitapları) yerel bilgisayarınıza indirmek için aşağıdaki adımları sırasıyla takip etmeniz yeterlidir.

### 1. DVC Kurulumu

DVC'yi bilgisayarınıza kurmak oldukça basittir:

*   **Linux (Arch/CachyOS):**
    ```bash
    sudo pacman -S dvc
    ```
*   **Linux (Ubuntu/Debian):**
    ```bash
    sudo apt install dvc
    ```
*   **Python ile (Tüm İşletim Sistemleri):**
    ```bash
    pip install "dvc[gdrive]"
    ```

### 2. Büyük Dosyaları Çekme (Download)

Proje dizininde terminali açın ve aşağıdaki tek bir komutla tüm videoları ve büyük PDF'leri Google Drive'dan otomatik olarak indirin:

```bash
dvc pull
```

*Not: İlk defa çalıştığında DVC sizden tarayıcı üzerinden Google Drive hesabınızla yetkilendirme (login) yapmanızı isteyecektir.*

---

## 🤝 Katkıda Bulunma (Açık Kaynak)

Bu depo tamamen öğrencilerin katkılarıyla büyümektedir. Yeni bir sınav sorusu, ders notu veya ders kaydı eklemek isterseniz aşağıdaki adımları uygulayabilirsiniz:

### Normal Dosya Ekleme (PDF, PPTX, Görsel vb. < 10MB)
1.  İlgili dersin klasörüne gidin (örn: `Algorithms/Sınav_Soruları/`).
2.  Dosyanızı ekleyin.
3.  Git ile commit edip Pull Request gönderin.

### Büyük Dosya Ekleme (Video Kayıtları ve Devasa Kitaplar > 10MB)
Büyük boyutlu dosyaları depoya eklemek için DVC'yi kullanıyoruz:

1.  Dosyanızı ilgili klasöre yerleştirin (örn: `Circuit_Theory/Ders_Kayitlari/yeni_video.mp4`).
2.  Terminalde dosyayı DVC'ye ekleyin:
    ```bash
    dvc add Circuit_Theory/Ders_Kayitlari/yeni_video.mp4
    ```
    *(Bu komut dosyayı `.gitignore`'a ekler ve `yeni_video.mp4.dvc` adında küçük bir işaretçi dosya oluşturur)*
3.  İşaretçi dosyasını ve otomatik güncellenen `.gitignore` dosyasını Git'e ekleyin:
    ```bash
    git add .gitignore Circuit_Theory/Ders_Kayitlari/yeni_video.mp4.dvc
    ```
4.  Değişiklikleri Git ile commit edin ve büyük dosyayı buluta gönderin:
    ```bash
    dvc push
    ```
5.  Git değişikliklerinizi GitHub'a gönderin ve Pull Request açın!

---

## 📢 Telegram Kanalı ve Yardımcı Kaynaklar

Aradığınız bazı kaynaklar veya güncel paylaşımlar bu depoda henüz yer almıyorsa, Çukurova Üniversitesi Bilgisayar Mühendisliği öğrencilerinin aktif yardımlaşma adresi olan Telegram kanalına göz atabilirsiniz:

🔗 **Telegram Kanalı:** [t.me/cucengsinav](http://t.me/cucengsinav)

Aşağıda, Telegram kanalında paylaşılan ve ders çalışırken size büyük kolaylık sağlayacak seçme yardımcı kaynakların hızlı bağlantıları yer almaktadır:

| Dönem / Ders | Kaynak Türü ve Açıklama | Bağlantı Linki |
| :--- | :--- | :--- |
| **Genel Kaynak** | Karışık Sınav Soruları (Google Drive Arşivi) | [t.me/cucengsinav/23](https://t.me/cucengsinav/23) |
| **1. Dönem** | Physics 1 Çalışmak İçin Yabancı YouTube Oynatma Listesi | [t.me/cucengsinav](https://t.me/cucengsinav) |
| | Physics 1 Türkçe Anlatım (Necati Çelik) | [Necati Çelik YouTube Kanalı](https://www.youtube.com/@PHYSICSwithNecatiCelik) / [Çalma Listesi](https://www.youtube.com/watch?v=kCp5yYjo9zE&list=PLUsazvR8hcnpd71sdkxuY3-Jc-n4BQi8U) |
| **2. Dönem** | Circuit Theory Kaynakları & Sınav Soruları | [t.me/cucengsinav/51](https://t.me/cucengsinav/51) |
| | Discrete Mathematics Eski Ders Videoları *(Müfredat değişmiş olabilir)* | [t.me/cucengsinav/3](https://t.me/cucengsinav/3) |
| | Discrete Mathematics PDF Notları | [t.me/cucengsinav/28](https://t.me/cucengsinav/28) |
| | Physics 2 Yabancı YouTube Çalışma Oynatma Listesi | [YouTube Oynatma Listesi](https://youtube.com/playlist?list=PLeuwqzPmoKOl4nK5TSDZXVn9P6DdzFdqg&si=sCMY6yCIwoNMihST) |
| | Physics 2 Pandemi Dönemi Vize Sınav Soruları | [t.me/cucengsinav/57](https://t.me/cucengsinav/57) |
| | Physics Serway 1 ve 2 Soruları ve Çözümleri PDF | [t.me/cucengsinav/224](https://t.me/cucengsinav/224) |
| | Algorithms and Programming 2 Lab Midterm PDF | [t.me/cucengsinav/362](https://t.me/cucengsinav/362) |
| **3. Dönem** | Karışık Ders Notları (Data Structures, IC, Digital Design, Differential Equations) | [t.me/cucengsinav/156](https://t.me/cucengsinav/156) |
| | Differential Equations Vize Örnek Soruları (2019, 2021) | [t.me/cucengsinav/146](https://t.me/cucengsinav/146) |
| **4. Dönem** | Signal Systems Vize Çıkmış Sorular & Çözümleri | [t.me/cucengsinav/368](https://t.me/cucengsinav/368) |
| | Operating Systems Genel Kaynaklar & 2021 Midterm Çıkmış Sorular | [t.me/cucengsinav/305](https://t.me/cucengsinav/305) |
| | Operating Systems 2016 Final Sınavı Soruları | [t.me/cucengsinav/290](https://t.me/cucengsinav/290) |
| | Programming Languages Ders Kaynakları | [t.me/cucengsinav/31](https://t.me/cucengsinav/31) |
| | Programming Languages Örnek Vize Soruları | [t.me/cucengsinav/279](https://t.me/cucengsinav/279) |
| | Numerical Analysis Konu Notları PDF | [t.me/cucengsinav/48](https://t.me/cucengsinav/48) |
| | Numerical Analysis Midterm Sınav Soruları | [t.me/cucengsinav/278](https://t.me/cucengsinav/278) |
| | Numerical Analysis Eski Çıkmış Final Soruları | [t.me/cucengsinav/107](https://t.me/cucengsinav/107) |
| | Numerical Analysis YouTube Çalışma Listesi | [YouTube Oynatma Listesi](https://youtube.com/playlist?list=PLv8H-Mw_lQujyulIJSumAR6MHwPx2tXtj) |
| **5. Dönem** | Linear Systems Vize Örneği ve Cevapları | [t.me/cucengsinav/189](https://t.me/cucengsinav/189) |
| **6. Dönem** | Software Engineering Midterm Çıkmış Sorular | [t.me/cucengsinav/349](https://t.me/cucengsinav/349) |
| | Software Engineering Serkan Hoca Slaytları | [Resmi CENG Sayfası](https://ceng.cu.edu.tr/skartal/cen352/kaynaklar.html) |
| | Database Management Systems Final Sınav Soruları | [t.me/cucengsinav/293](https://t.me/cucengsinav/293) |
| **8. Dönem** | Computer Vision Serkan Hoca Slaytları | [Resmi CENG Sayfası](https://ceng.cu.edu.tr/skartal/cen462/kaynaklar.html) |
| | ISG 2 Vize Soruları | [t.me/cucengsinav/364](https://t.me/cucengsinav/364) |
| | Cyber Security 2019 Vize Çıkmış Sorular | [t.me/cucengsinav/371](https://t.me/cucengsinav/371) |

---

## ⚖️ Yasal Uyarı

Bu depo tamamen eğitim ve yardımlaşma amacıyla oluşturulmuştur. Paylaşılan tüm materyaller derslerin öğretim üyelerine ve ilgili telif sahiplerine aittir. Herhangi bir telif hakkı ihlali bildiriminde ilgili içerik derhal kaldırılacaktır.
