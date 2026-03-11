import docx
import os

doc = docx.Document(r'c:\Users\hp\Desktop\TCS NQT\TCS_NQT_2026_FINAL_BIBLE.docx')

# Get ALL text with full detail
with open(r'c:\Users\hp\Desktop\TCS NQT\bible_full.txt', 'w', encoding='utf-8') as f:
    for i, p in enumerate(doc.paragraphs):
        text = p.text.strip()
        if text:
            style_name = p.style.name if p.style else 'Normal'
            f.write(f'[PARA {i}] [{style_name}]\n{text}\n\n')

print("Done")
