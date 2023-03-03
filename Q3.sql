SELECT owner_id, owner_name, count(category.category_id) AS different_category_count
FROM owner, article, category_article_mapping, category
WHERE owner.owner_id = article.article_id
AND article.article_id = category_article_mapping.article_id
AND category_article_mapping = category.category_id;