<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<title>
					Table
				</title>
				<link rel="stylesheet" href="app.css" type="text/css" />
			</head>
			<body>
				<table>
					<tr>
						<th>Фамилия</th>
						<th>JS</th>
						<th>Физика</th>
						<th>Иностранный язык</th>
					</tr>
					<xsl:for-each select="main/student">
						<tr>
							<td>
								<xsl:value-of select="surname" />
							</td>
							<xsl:if test="java-script&lt;4">
								<td style="background-color: red;">
									<xsl:value-of select="java-script" />
								</td>
							</xsl:if>
							<xsl:if test="java-script&gt;8">
								<td style="background-color: green;">
									<xsl:value-of select="java-script" />
								</td>
							</xsl:if>
							<xsl:if test="java-script&gt;=4">
								<xsl:if test="java-script&lt;=8">
									<td>
										<xsl:value-of select="java-script" />
									</td>
								</xsl:if>
							</xsl:if>
							<xsl:if test="physics&lt;4">
								<td style="background-color: red;">
									<xsl:value-of select="physics" />
								</td>
							</xsl:if>
							<xsl:if test="physics&gt;8">
								<td style="background-color: green;">
									<xsl:value-of select="physics" />
								</td>
							</xsl:if>
							<xsl:if test="physics&gt;=4">
								<xsl:if test="physics&lt;=8">
									<td>
										<xsl:value-of select="physics" />
									</td>
								</xsl:if>
							</xsl:if>
							<xsl:if test="english&lt;4">
								<td style="background-color: red;">
									<xsl:value-of select="english" />
								</td>
							</xsl:if>
							<xsl:if test="english&gt;8">
								<td style="background-color: green;">
									<xsl:value-of select="english" />
								</td>
							</xsl:if>
							<xsl:if test="english&gt;=4">
								<xsl:if test="english&lt;=8">
									<td>
										<xsl:value-of select="english" />
									</td>
								</xsl:if>
							</xsl:if>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>