graph TD
    %% Entities
    User[User]
    Org[Organization]
    Repo[Repository]
    PR[Pull Request]
    Issue[Issue]
    Commit[Commit]

    %% Relationships
    Membership{Membership}
    OwnsU{Owns}
    OwnsO{Owns}
    Contributes{Contributes}
    AuthorsPR{Authors}
    HasPR{Has}
    ReportsIssue{Reports}
    HasIssue{Has}
    AuthorsCommit{Authors}
    HasCommit{Has}
    IncludedIn{Included In}
    ForkedFrom{Forked From}

    %% User Attributes
    u1((<u>user_id</u>)) --- User
    u2((username)) --- User
    u3((email)) --- User
    u4((avatar_url)) --- User
    u5((bio)) --- User

    %% Organization Attributes
    o1((<u>org_id</u>)) --- Org
    o2((org_name)) --- Org
    o3((plan_type)) --- Org

    %% Repository Attributes
    r1((<u>repo_id</u>)) --- Repo
    r2((repo_name)) --- Repo
    r3((visibility)) --- Repo
    r4((language)) --- Repo

    %% Relationship Connections
    User --- Membership --- Org
    m1((role)) --- Membership
    m2((joined_at)) --- Membership

    User --- OwnsU --- Repo
    Org --- OwnsO --- Repo
    
    User --- Contributes --- Repo
    c1((commit_count)) --- Contributes

    User --- AuthorsPR --- PR
    Repo --- HasPR --- PR
    
    User --- ReportsIssue --- Issue
    Repo --- HasIssue --- Issue

    User --- AuthorsCommit --- Commit
    Repo --- HasCommit --- Commit
    PR --- IncludedIn --- Commit

    %% Self Relation
    Repo --- ForkedFrom --- Repo

    %% PR Attributes
    pr1((<u>pr_id</u>)) --- PR
    pr2((status)) --- PR
    pr3((title)) --- PR

    %% Issue Attributes
    i1((<u>issue_id</u>)) --- Issue
    i2((status)) --- Issue

    %% Commit Attributes
    co1((<u>commit_sha</u>)) --- Commit
    co2((message)) --- Commit

    %% Styling
    style User fill:#f9f,stroke:#333,stroke-width:2px
    style Org fill:#f9f,stroke:#333,stroke-width:2px
    style Repo fill:#f9f,stroke:#333,stroke-width:2px
    style PR fill:#f9f,stroke:#333,stroke-width:2px
    style Issue fill:#f9f,stroke:#333,stroke-width:2px
    style Commit fill:#f9f,stroke:#333,stroke-width:2px
    
    style Membership fill:#fff,stroke:#333,stroke-dasharray: 5 5
    style Contributes fill:#fff,stroke:#333,stroke-dasharray: 5 5