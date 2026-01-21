# Git and Version Control

## What is Git?

Git is a distributed version control system that tracks changes to files over time. It allows multiple developers to work on the same codebase, manage different versions of code, and collaborate without overwriting each other's work.

Unlike centralized version control systems, every developer has a complete copy of the repository history on their local machine. This makes operations fast and enables offline work.

Git records changes as commits, which are snapshots of the project at specific points in time. You can navigate through history, compare versions, and revert to previous states if needed.

Git is essential for modern software development because it enables collaboration, provides a safety net for experimentation, and maintains a complete record of project evolution.

## Difference between Git and GitHub?

Git is the version control system itself—the tool that tracks changes to files, manages branches, and enables collaboration. It works entirely on your local machine.

GitHub is a web-based platform that hosts Git repositories in the cloud. It provides additional features like pull requests, issue tracking, code review tools, and project management capabilities.

You can use Git without GitHub by hosting repositories locally or on other platforms like GitLab or Bitbucket. GitHub simply makes it easier to share code, collaborate with others, and manage projects through a web interface.

GitHub also provides services like GitHub Actions for automation, GitHub Pages for hosting websites, and security features for managing access to repositories.

## What is a commit?

A commit is a snapshot of your project at a specific point in time. It records the state of all tracked files and includes metadata like the author, timestamp, and a message describing the changes.

Creating a commit is a two-step process: first, you stage changes using `git add` to select which modifications to include, then you commit the staged changes with `git commit`.

Each commit has a unique identifier (a SHA hash) and points to its parent commit, creating a history chain. Commits are permanent records that cannot be modified without changing their identifier.

Good commit messages are important because they explain what changed and why, making it easier to understand project history and debug issues later.

## What is a branch?

A branch is an independent line of development in a Git repository. It allows you to work on features, fixes, or experiments without affecting the main codebase.

The default branch is typically called `main` or `master`. When you create a new branch, it starts from your current commit and diverges as you make new commits on that branch.

Branches are lightweight in Git—they are just pointers to specific commits. You can switch between branches instantly, and multiple branches can exist simultaneously.

Branches enable parallel development where different team members work on different features independently, then merge their changes back into the main branch when ready.

## What is git remote?

A remote is a reference to a repository hosted on another machine, usually on a server like GitHub. It allows you to synchronize your local repository with others.

The most common remote is called `origin`, which typically refers to the repository you cloned from. You can have multiple remotes pointing to different repositories.

Remotes enable collaboration by allowing you to push your commits to a shared repository and pull changes made by others. You manage remotes using commands like `git remote add`, `git remote remove`, and `git remote -v` to list configured remotes.

Understanding remotes is essential for collaboration because it is how you share code with others and integrate their work into your local repository.

## What happens when you git pull?

`git pull` fetches changes from a remote repository and merges them into your current branch in a single command. It is essentially `git fetch` followed by `git merge`.

First, Git contacts the remote repository and downloads any new commits that exist there but not in your local repository. Then it attempts to merge those changes into your current branch.

If there are no conflicts, the merge completes automatically, and your branch now includes both your local commits and the remote commits. If there are conflicts where both you and someone else modified the same lines, Git stops and asks you to resolve them manually.

`git pull` is convenient for updating your local branch with the latest changes from the remote repository.

## Difference between pull and fetch?

`git fetch` downloads changes from the remote repository but does not modify your working files or current branch. It updates your local copy of remote branches, allowing you to see what others have done.

After fetching, you can inspect the changes, compare them with your work, and decide how to integrate them. This gives you more control over the merge process.

`git pull` automatically merges fetched changes into your current branch. It is more convenient but gives you less opportunity to review changes before merging.

Using `fetch` followed by manual merge is safer when you want to carefully review changes or when working on complex features. Using `pull` is faster for routine updates when you trust the changes.

## What is a merge conflict?

A merge conflict occurs when Git cannot automatically combine changes because two branches modified the same part of a file in different ways.

This typically happens when you and another developer edit the same lines of code, or when one person edits lines that another person deleted. Git cannot determine which change to keep, so it marks the conflict and asks you to resolve it manually.

Conflict markers are inserted into the file showing both versions of the conflicting changes. You must edit the file to choose which changes to keep or combine them appropriately.

Merge conflicts are a normal part of collaborative development and are resolved by carefully examining both changes and determining the correct final version.

## How do you resolve one?

To resolve a merge conflict, you first identify which files have conflicts using `git status`. Git marks conflicts with special markers in the files.

You open each conflicting file and find the conflict markers. The section between `<<<<<<< HEAD` and `=======` shows your changes, and the section between `=======` and `>>>>>>> branch-name` shows the incoming changes.

You manually edit the file to keep the desired changes, remove the conflict markers, and ensure the code is correct. This might mean keeping one version, combining both, or writing something entirely new.

After resolving all conflicts in all files, you stage the resolved files with `git add` and complete the merge with `git commit`. The commit message typically indicates that it is a merge commit with resolved conflicts.

## What is your usual Git workflow?

My typical workflow starts with pulling the latest changes from the main branch to ensure I am working with up-to-date code. Then I create a new branch for the feature or fix I am working on.

As I work, I make frequent, small commits with descriptive messages. Each commit represents a logical unit of work, making it easier to understand changes and revert if needed.

Before pushing my branch, I review my changes with `git diff` and ensure tests pass. I then push my branch to the remote repository and create a pull request for review.

After incorporating feedback and ensuring all checks pass, I merge the pull request into the main branch. I then delete the feature branch and pull the updated main branch locally to start the next task.

## Have you ever broken a repo?

I have not broken a repository in a way that lost work permanently, but I have made mistakes that required careful recovery.

I have accidentally committed large files or sensitive information and had to remove them from history. I have also created complicated merge conflicts by working on outdated branches.

Once I overwrote local changes by forcing a pull without properly committing my work first. I was able to recover using Git's reflog, but it taught me to commit or stash work before pulling.

These experiences taught me the importance of committing frequently, pushing to remote branches for backup, and understanding Git commands before running them, especially destructive ones.

## How do you organize commits?

I organize commits to make them logical and easy to understand. Each commit should represent a single, coherent change that makes sense in isolation.

I write clear commit messages using the imperative mood, describing what the commit does rather than what I did. For example, "Add user authentication" instead of "Added authentication."

I avoid mixing unrelated changes in a single commit. For instance, fixing a bug and adding a new feature should be separate commits, even if done in the same session.

Before committing, I review the changes to ensure nothing unintended is included, like debugging code or commented-out sections. I also make sure the code builds and tests pass to avoid committing broken code.

This organization makes code review easier, helps others understand changes, and simplifies finding and reverting specific changes if needed.
