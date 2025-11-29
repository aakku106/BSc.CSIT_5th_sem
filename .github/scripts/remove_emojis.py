#!/usr/bin/env python3
"""
Script to remove emojis from markdown headings while preserving content.
"""

import re
import os
import glob

def remove_emojis_from_text(text):
    """Remove emojis from text using comprehensive Unicode ranges."""
    emoji_pattern = re.compile(
        "["
        "\U0001F1E0-\U0001F1FF"  # flags (iOS)
        "\U0001F300-\U0001F5FF"  # symbols & pictographs
        "\U0001F600-\U0001F64F"  # emoticons
        "\U0001F680-\U0001F6FF"  # transport & map symbols
        "\U0001F700-\U0001F77F"  # alchemical symbols
        "\U0001F780-\U0001F7FF"  # Geometric Shapes Extended
        "\U0001F800-\U0001F8FF"  # Supplemental Arrows-C
        "\U0001F900-\U0001F9FF"  # Supplemental Symbols and Pictographs
        "\U0001FA00-\U0001FA6F"  # Chess Symbols
        "\U0001FA70-\U0001FAFF"  # Symbols and Pictographs Extended-A
        "\U00002702-\U000027B0"  # Dingbats
        "\U000024C2-\U0001F251" 
        "\U00002B50\U00002B55"  # stars
        "\U0000231A\U0000231B"  # watches
        "\U00002328\U000023CF"  # keyboard/eject
        "\U000023E9-\U000023F3"  # media buttons
        "\U000023F8-\U000023FA"  # pause/stop/record
        "]+",
        flags=re.UNICODE
    )
    return emoji_pattern.sub('', text)

def process_markdown_file(filepath):
    """Process a single markdown file to remove emojis from headings."""
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            lines = f.readlines()
        
        modified = False
        new_lines = []
        
        for line in lines:
            # Check if line is a heading
            if line.strip().startswith('#'):
                match = re.match(r'^(#{1,6})\s+(.*)$', line)
                if match:
                    hashes, content = match.groups()
                    clean_content = remove_emojis_from_text(content)
                    # Remove extra spaces that might be left
                    clean_content = re.sub(r'^\s+', '', clean_content)
                    new_line = f"{hashes} {clean_content}\n"
                    if new_line != line:
                        modified = True
                    new_lines.append(new_line)
                else:
                    new_lines.append(line)
            else:
                new_lines.append(line)
        
        if modified:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.writelines(new_lines)
            print(f"✓ Cleaned: {filepath}")
            return True
        else:
            print(f"- No changes: {filepath}")
            return False
            
    except Exception as e:
        print(f"✗ Error processing {filepath}: {e}")
        return False

def main():
    """Main function to process all markdown files."""
    base_dir = "/Users/aakku/Desktop/5th_sem"
    
    # Find all markdown files
    markdown_files = []
    markdown_files.extend(glob.glob(f"{base_dir}/*.md"))
    markdown_files.extend(glob.glob(f"{base_dir}/.github/**/*.md", recursive=True))
    markdown_files.extend(glob.glob(f"{base_dir}/*/qtn_sets_and_syllabus/*.md", recursive=True))
    
    print("=" * 60)
    print("Removing emojis from markdown headings...")
    print("=" * 60)
    
    modified_count = 0
    for filepath in sorted(markdown_files):
        if process_markdown_file(filepath):
            modified_count += 1
    
    print("=" * 60)
    print(f"Total files processed: {len(markdown_files)}")
    print(f"Files modified: {modified_count}")
    print("=" * 60)

if __name__ == "__main__":
    main()
